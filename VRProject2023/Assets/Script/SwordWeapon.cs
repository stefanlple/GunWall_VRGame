using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwordWeapon : ControllableWeapon, IUpgradeble
{
    [SerializeField] int ChargingCount = 2;
    int MaxChares;
    [SerializeField] bool charged = false;
    [SerializeField] AudioSource audioSource;
    [SerializeField] TrailRenderer trailRender;
    [SerializeField] AudioClip denied;
    [SerializeField] Rigidbody movementBody;
    [SerializeField] Transform currentHandtoTrack;
    [SerializeField] Transform altHand;

    [SerializeField] GameObject ChargerHolder;
    Renderer[] ChargedRender;


    // [SerializeField] AudioClip Humming;
    // Start is called before the first frame update
    void Start()
    {
        ChargedRender = ChargerHolder.GetComponentsInChildren<Renderer>();

        movementBody = GetComponentInParent<Rigidbody>();

        CheckAndUpdateCount();

        MaxChares = ChargingCount;
    }

    // Update is called once per frame
    void Update()
    {     
        
       if (OVRInput.GetDown(usebutton)) // 
       {
          ChargingBlade(true);

       }
       if (OVRInput.GetUp(usebutton))
       {
           ChargingBlade(false);
       } 

    }
    private void FixedUpdate()
    {
        movementBody.velocity = (currentHandtoTrack.position - transform.position) / Time.fixedDeltaTime;

        /*
        Quaternion roationdiff = currentHandtoTrack.rotation * Quaternion.Inverse(transform.rotation);
        roationdiff.ToAngleAxis(out float angleInDeg, out Vector3 rotationAxis);

        Vector3 rotationDifferneceInDegree = angleInDeg * rotationAxis;

        racketRigi.angularVelocity = (rotationDifferneceInDegree * Mathf.Deg2Rad / Time.fixedDeltaTime);
        */

        //  transform.rotation = currentHandtoTrack.rotation; // Nur zum Test -1

        movementBody.MoveRotation(currentHandtoTrack.rotation);
    }
    
    private void ChargingBlade(bool onChard)
    {
        if (ChargingCount > 0 | !onChard)
        {
            charged = onChard;
            Hummingeffekt(onChard);
            //TrailAktivation(onChard);
        }
        else
        {
            AudioSource.PlayClipAtPoint(denied, transform.position);
        }


    }

    public void DeCharging()
    {
        if (charged)
        {
            ChargingCount--;
            ChargingBlade(false);
            ChangeChargeVisual(ChargingCount, Color.black);

        }
        
    }
    public void increaseChargeCount() { 
        if(ChargingCount <ChargerHolder.transform.childCount){
            ChargingCount++;
            ChangeChargeVisual(ChargingCount-1, Color.magenta);
        }
    }

    public void CheckAndUpdateCount()
    {
        for (int i = 0; i < ChargingCount; i++)
        {
            ChangeChargeVisual(i, Color.magenta);
        }
    }


    private void Hummingeffekt(bool turnon)
    {
        OVRHapticsClip virbriationClip = new OVRHapticsClip(audioSource.clip);
        
        if (turnon)
        {
            audioSource.Play();
            CauseVirb(virbriationClip);
            StartCoroutine(HummingVirbration(virbriationClip));
            StartCoroutine(ChargedEffekt());

        }
        else
        {
            audioSource.Stop();
            StopVirb();


        }
    }
    IEnumerator HummingVirbration(OVRHapticsClip virbriationClip) // Man kann nicht Vibration per inten Function Loopen deswegen das
    {
        while (charged)
        {
            CauseVirb(virbriationClip);
            yield return new WaitForSeconds(audioSource.clip.length);
        }
        StopVirb();

    }

    private void StopVirb()
    {
        if (leftHand)
        {OVRHaptics.LeftChannel.Clear();}
        else{OVRHaptics.RightChannel.Clear();}   
    }

    private void CauseVirb(OVRHapticsClip virbriationClip)
    {
        if (leftHand) { OVRHaptics.LeftChannel.Preempt(virbriationClip); }
        else { OVRHaptics.RightChannel.Preempt(virbriationClip); }
    }

    IEnumerator ChargedEffekt() // Platzhalter f�r was intresantes
    {
        Vector3 Mainscale = transform.localScale;
        while (charged)
        {
            yield return new WaitForSeconds(0.001f);
            transform.localScale = Mainscale * 1.05f;
            yield return new WaitForSeconds(0.001f);
            transform.localScale = Mainscale * 1.1f;
            yield return new WaitForSeconds(0.001f);
            transform.localScale = Mainscale;
        }
    }
    private void TrailAktivation(bool on)
    {
        trailRender.enabled = on;
    }
    private void OnTriggerEnter(Collider other)
    {
        //print("hititSword");
        if (other.tag == "Enemy")
        {
            //print("hititSword Hard");
            if (!charged)
            {
                other.GetComponent<Enemy>().TakingHit(transform.GetChild(0).transform);
            }
            else
            {
                print("hititSword Hard Ultra");
                other.GetComponent<Enemy>().UltralHit(transform.GetChild(0).transform);
                DeCharging();
            }
           

        }
    }
    private void ChangeChargeVisual(int cuurentCount,Color newColor)
    {
        Material thisCharged = ChargedRender[cuurentCount].material;
        
        thisCharged.color = newColor;
        thisCharged.SetColor("_EmissionColor", newColor);
        Transform tf = ChargedRender[cuurentCount].transform;
        if (newColor == Color.black)
        {
           
            tf.localScale = new Vector3(tf.localScale.x, tf.localScale.y, 0.01f);
        }
        else
        {
            tf.localScale = new Vector3(tf.localScale.x, tf.localScale.y, 0.02f);
        }

        ChargedRender[cuurentCount].material = thisCharged;
    }


    public void Upgrade(int id)
    {
        if(id == 1)
        {
            increaseChargeCount();
        }
        else if(id == 2)
        {
            MaxChares += 1;
            Transform tf = ChargedRender[MaxChares-1].transform;
            tf.localScale = new Vector3(tf.localScale.x, 0.01f, 0.01f);
            increaseChargeCount();
        }
       
    }

    public bool ReachedMaxUpgrade(int id)
    {
        if (id == 1)
        {
            return (MaxChares == ChargingCount);
        }
        else if (id == 2){
            return (MaxChares == 5);
        }
        else
        {
            return true;
        }
    }
    public void ChangeHand()
    {
        Transform cache = altHand;
        altHand = currentHandtoTrack;
        currentHandtoTrack = cache;
        SwitchButtons();

    }

   
}
