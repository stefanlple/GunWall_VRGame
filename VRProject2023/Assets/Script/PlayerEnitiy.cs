using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerEnitiy : MonoBehaviour  ,IObserver ,IUpgradeble

{
    [SerializeField] int hp;
    [SerializeField] int MAXhp;
    public int Points;
    [SerializeField] int BuyPoints;
    [SerializeField] AudioClip hitsound;
    [SerializeField] Playe_UI UI;
    [SerializeField] float invincibleTime = 0.5f;
    [SerializeField] bool invincible;
    [SerializeField] float RestTimer;
    [SerializeField] AudioSource audioSource;
    [SerializeField] AudioSource audioSourceDanger;
    [SerializeField] ParticleSystem DamageEffekt;
    //[SerializeField] Spawner_BlockWall Spawner; // 

    //Area
    /*
    public Vector3 point1;
    public Vector3 point2;
    public Vector3 point3;
    public Vector3 point4;
    */ // Siehe Kommentar bei IsPointOutsideRectangle

    //area led
    public GameObject led1;
    public GameObject led2;
    public GameObject led3;
    public GameObject led4;

    //matieral 1
    public Material normalMaterial;
    public Material alertMaterial;

    public float countdownDuration = 3f; 
    public int lifeLoss = 1; 

    private bool isPlayerInside = true;
    private float countdownTimer;


    [SerializeField] AudioClip warningSound;
    /*private bool IsPointOutsideRectangle(Vector3 point) // Nun mit Trigger Exit gemacht, das ist simpler und anpassbarer als so auszurechen 
    {
        Vector3 AB = point2 - point1;
        Vector3 BC = point3 - point2;
        Vector3 CD = point4 - point3;
        Vector3 DA = point1 - point4;

        Vector3 AP = point - point1;
        Vector3 BP = point - point2;
        Vector3 CP = point - point3;
        Vector3 DP = point - point4;

        if (Vector3.Dot(AB, AP) < 0f ||
            Vector3.Dot(BC, BP) < 0f ||
            Vector3.Dot(CD, CP) < 0f ||
            Vector3.Dot(DA, DP) < 0f)
        {
            return true;
        }

        return false;
    } */

    private void ResetCountdown()
    {
        countdownTimer = countdownDuration;
    }

    private void TakingDamage()
    {
        if (!invincible)
        {
            DamageEffekt.Play();
            AudioSource.PlayClipAtPoint(hitsound, transform.position);
            hp--;
            UI.HeartUiChange(hp,true);
            if (hp > 0)
            {
                StartCoroutine(Invible());
            }
            else
            {
                //StartCoroutine(UI.HitDeath(Points));
                audioSource.Stop();
                SubjectEvent.TriggerOnPlayerDeath();
            }
        }
    }

    private void PlayWarningSound()
    {
        if (warningSound != null && !audioSourceDanger.isPlaying)
        {
            audioSourceDanger.clip = warningSound;
            audioSourceDanger.Play();
        }
    }

    private void StopWarningSound()
    {
        if (audioSourceDanger.isPlaying){
        audioSourceDanger.Stop();
        }
    }

    private void Start()
    {
        MAXhp = hp;
        countdownTimer = countdownDuration;

        SubscribeToEvents();

       // GetComponent<CharacterController>().detectCollisions = false;
    }
    private void OnTriggerEnter(Collider other)
    {
        TakingDamage();
        if(other.gameObject.layer == 17)
        {
            Destroy(other.gameObject);
        }

    }
    public void GetKill(int points)
    {
        Points += points;
        BuyPoints += points;
        UI.Set_PointText(BuyPoints.ToString());
    }
    IEnumerator Invible()
    {
        invincible = true;
        yield return new WaitForSeconds(invincibleTime);
        invincible = false;
    }


    private void Update()
    {
        // Es ist zu �berleben allen Input hier rein zu packen

        if (OVRInput.Get(OVRInput.Button.One) && (hp <= 0))
        {
            RestTimer += Time.deltaTime;
            if (RestTimer > 2)
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
        }
        if (OVRInput.GetUp(OVRInput.Button.SecondaryIndexTrigger) && (hp < 0))
        {
            RestTimer = 0;
        }
        if (OVRInput.GetDown(OVRInput.Button.Three))
        {
            ChangeHand();
        }




        if (!isPlayerInside)
        {
            countdownTimer -= Time.deltaTime;
            PlayWarningSound();
            if (countdownTimer <= 0f)
            {
                TakingDamage();
                ResetCountdown();
            }
            if(led1.GetComponent<MeshRenderer>().material!=alertMaterial){
                led1.GetComponent<MeshRenderer>().material=alertMaterial;
                led2.GetComponent<MeshRenderer>().material=alertMaterial;
                led3.GetComponent<MeshRenderer>().material=alertMaterial;
                led4.GetComponent<MeshRenderer>().material=alertMaterial;
            }
        }else{
            if(led1.GetComponent<MeshRenderer>().material!=normalMaterial){
            led1.GetComponent<MeshRenderer>().material=normalMaterial;
            led2.GetComponent<MeshRenderer>().material=normalMaterial;
            led3.GetComponent<MeshRenderer>().material=normalMaterial;
            led4.GetComponent<MeshRenderer>().material=normalMaterial;
            }
            StopWarningSound();
        }
    }

    

    public void PlayerGoes(bool inside)
    {
        isPlayerInside = inside;
    }


    public void StartMusic(int x) {StartMusic();}
    public void StartMusic()
    {
     
        
            audioSource.volume = 1;
            audioSource.pitch = 1f;
            if (!audioSource.isPlaying)
            { audioSource.Play(); }
     
        
    }
    public void MusicDuringPause()
    {
        
        audioSource.volume = 0.5f;
        audioSource.pitch = 0.5f;
        
       
    }

    public void Heal(int points)
    {
        hp += points;
     
    }
    public void IncreaseMaxhp(int points)
    {
        MAXhp += points;
    }


    public void SubscribeToEvents()
    {
        SubjectEvent.Starting += StartMusic;
        SubjectEvent.WaveEnd += MusicDuringPause;
        SubjectEvent.WaveBeginn += StartMusic;
        SubjectEvent.PlayerArea += PlayerGoes;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.Starting -= StartMusic;
        SubjectEvent.WaveEnd -= MusicDuringPause;
        SubjectEvent.WaveBeginn -= StartMusic;
        SubjectEvent.PlayerArea -= PlayerGoes;
    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }


    public bool Buy(int cost)
    {
        if(cost <= BuyPoints)
        {
            BuyPoints -= cost;
            UI.Set_PointText(BuyPoints.ToString());
            return true;
        }
        else
        {
            return false;
        }
    }
    
    /// ////////////////////// Refiller 
    public void Upgrade(int i)
    {
        if(i == 1)
        {
            RefillHearts();
        }
        else if(i == 2)
        {
            UpgardeMax();
        }
       
    }

    public bool ReachedMaxUpgrade(int i)
    {
        if (i == 1)
        {
            return CheckHearts();
        }
        else if (i == 2)
        {
            return MAXhp == 5;
        }
        return true;

    }
    public void UpgardeMax()
    {
        MAXhp +=1;
        UI.SetExtraHeart(MAXhp);
        RefillHearts(); // +1 Max +1 Hp
    }

    private bool CheckHearts()
    {
        return (hp == MAXhp);
    }
    private void RefillHearts()
    {
        print("refill:");
        Heal(1);
        print(hp);
        UI.HeartUiChange(hp, false);
    }
    public void ChangeHand()
    {
        FindObjectOfType<FireWeapon>().ChangeHand();
        FindObjectOfType<SwordWeapon>().ChangeHand();
    }
}
