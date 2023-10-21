using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireWeapon : ControllableWeapon, IUpgradeble,IObserver
{
    [SerializeField] Bullet BulletPref;
    [SerializeField] Bullet ForRaycastBullet;
    bool isEnabled = true;
    [SerializeField] GameObject empty;
    Animator animator;
    [SerializeField] AudioClip ShootingSound;
    [SerializeField] GameObject[] ShootingPoint;
    int SPindex = 0;
    [SerializeField] int damage = 1;
    [SerializeField] GameObject[] WeaponPart;
    bool damgaeWasBoosted = false;

    [SerializeField] Transform CurrentHand;
    [SerializeField] Transform AltHand;

    bool isPauseTime = false;

    bool UpgradeDoneJustNow = false;

    [SerializeField] bool raytractingMode = false;
    enum FireLevel
    {
        Single,
        Burst,
        Continuous
    }
    FireLevel firelevel = FireLevel.Single;
    bool ContFiring = false;

    // Start is called before the first frame update
    void Start()
    {
        SubscribeToEvents();
        leftHand = false;
        usebutton = OVRInput.Button.SecondaryIndexTrigger;
        altusebutton = OVRInput.Button.PrimaryIndexTrigger;

        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(usebutton) && isEnabled)
        {
            if(!(firelevel == FireLevel.Continuous))
            {
                Shooting();
            }
            else
            {
                if (!isPauseTime)
                {
                    ContFiring = true;
                    StartCoroutine(ContinuousFire());
                }
                else
                {
                    Shooting();
                }
               
            }
        }
        else if (OVRInput.GetUp(usebutton) && (firelevel == FireLevel.Continuous))
        {
            ContFiring = false;
        }

        if (OVRInput.GetDown(OVRInput.Button.PrimaryHandTrigger) && OVRInput.GetDown(OVRInput.Button.SecondaryHandTrigger)) // Just for Test , Cheat
        {
            Upgrade(1);
        }

    }
    public void Shooting()
    {
        if (isPauseTime)
        {
            ShootBullet();
        }
        else switch (firelevel)
        {
            case FireLevel.Single:
                {
                    ShootBullet();
                    StartCoroutine(Firerate(0.1f));
                    break;
                  
                }
            case FireLevel.Burst:
                {
                    StartCoroutine(BurstFire());
                    StartCoroutine(Firerate(0.4f));
                    break;
                }
            default: break;
        }
        

    }
   IEnumerator ContinuousFire()
   {
        if (UpgradeDoneJustNow)
        {
            UpgradeDoneJustNow  = false;
            FindObjectOfType<MessageBox>().Disap();

        }
        while (ContFiring)
        {
            ShootBullet();
            yield return new WaitForSeconds(0.125f);

        }
   }

    private void ShootBullet()
    {
        if (!raytractingMode)
        {
            Bullet Bullet = Instantiate(BulletPref, ShootingPoint[SPindex].transform.position, ShootingPoint[SPindex].transform.rotation);
            AudioSource.PlayClipAtPoint(ShootingSound, transform.position);
            Bullet.SetDamage(damage);
            VirbShock();
            EmptyAmmo();
        }
        else
        {
            Debug.DrawRay(ShootingPoint[SPindex].transform.position, ShootingPoint[SPindex].transform.forward, Color.green, 10000f);
            Bullet FakeBullet = Instantiate(ForRaycastBullet, ShootingPoint[SPindex].transform.position, ShootingPoint[SPindex].transform.rotation);
           // FakeBullet.GetComponent<Collider>().enabled = false;
            AudioSource.PlayClipAtPoint(ShootingSound, transform.position);
            FakeBullet.Speed = FakeBullet.Speed * 1.5f;
            RaycastHit hit;
            if (Physics.Raycast(ShootingPoint[SPindex].transform.position, ShootingPoint[SPindex].transform.forward, out hit, Mathf.Infinity,((1<<8) | (1<<12))))
            {
                print(hit.collider.gameObject.name);
               
                // Fake Bullet
                // Actuel Hitting
                Enemy hitEnemy = hit.collider.gameObject.GetComponentInParent<Enemy>();
                if(hitEnemy != null)
                {
                    hitEnemy.TakingHit(damage);
                }
            }

        }
    
    }

    private void VirbShock()
    {
        if (!leftHand){ OVRHaptics.RightChannel.Preempt(new OVRHapticsClip(ShootingSound));}
        else{ OVRHaptics.LeftChannel.Preempt(new OVRHapticsClip(ShootingSound));}
    }

    IEnumerator BurstFire()
    {
        if (isEnabled)
        {
            isEnabled = false;
            for (int bullet = 3; bullet > 0; bullet--)
            {
                ShootBullet();
                yield return new WaitForSeconds(0.1f);
            }
        }
       
       
    }

    private void EmptyAmmo()
    {
        GameObject emptyB = Instantiate(empty, transform.position, Quaternion.identity);
        emptyB.GetComponent<Rigidbody>().velocity = new Vector3(UnityEngine.Random.Range(0.25f, 0.5f), UnityEngine.Random.Range(1.5f, 3), UnityEngine.Random.Range(0.25f, 0.5f)); // Nicht Angepasst, vllt auch zur Animation machen wegen Optimierung
        Destroy(emptyB, 10f);
    }

    IEnumerator Firerate(float rate)
    {
        isEnabled = false;
        yield return new WaitForSeconds(rate);
        isEnabled = true;

    }

    public void Upgrade(int id)
    {
        if(!damgaeWasBoosted)
        {
            DamageBoost();
        }
        else
        {
            switch (firelevel)
            {
                case FireLevel.Single:
                    {
                        SetToBurst();
                        break;
                    }
                case FireLevel.Burst:
                    {
                        SetToContinous();
                        break;
                    }
            }
        }
       
    }

    private void SetToContinous()
    {
        damage = 1;
        FindObjectOfType<MessageBox>().ActivateMessage();
        UpgradeDoneJustNow = true;
        SPindex = 2;
        firelevel = FireLevel.Continuous;
        WeaponPart[2].SetActive(true);
        WeaponPart[0].SetActive(false);
    }

    private void SetToBurst()
    {
        firelevel = FireLevel.Burst;
        WeaponPart[1].SetActive(true);
    }

    private void DamageBoost()
    {
        damage = 2;
        WeaponPart[0].SetActive(true);
        SPindex = 1;
        damgaeWasBoosted = true;
    }

    public bool ReachedMaxUpgrade(int id)
    {
        return firelevel == FireLevel.Continuous;
    }
    public void ChangeHand()
    {
        Transform cache = AltHand;
        AltHand = CurrentHand;
        CurrentHand = cache;

        transform.parent.SetParent(CurrentHand);
        transform.parent.localPosition = Vector3.zero;
        transform.parent.localRotation = Quaternion.identity;
        SwitchButtons();

    }

    public void SubscribeToEvents()
    {
        SubjectEvent.WaveBeginn += SetPauseTimeBool;
        SubjectEvent.WaveEnd += SetPauseTimeBool;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveBeginn -= SetPauseTimeBool;
        SubjectEvent.WaveEnd -= SetPauseTimeBool;
    }
    private void SetPauseTimeBool(int i)
    {
        SetPauseTimeBool();
    }
    private void SetPauseTimeBool()
    {
        isPauseTime = !isPauseTime;
        ContFiring = false;

    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
}
