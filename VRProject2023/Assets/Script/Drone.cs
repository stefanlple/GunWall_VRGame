using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drone : Enemy,IObserver
{
    [SerializeField] GameObject DeathEffect;
    [SerializeField] SurpriseProjectile Projt;

    [SerializeField] GameObject MyGun;
    [SerializeField] float SpeedRoate = 10;
    PlayerEnitiy player;
    [SerializeField] int ammo = 2;
    [SerializeField] float fireRate = 4;

    [SerializeField] ParticleSystem particles;

    Rigidbody rigidbodyDrohne;
    [SerializeField] float SpeedMax = 10; // Speed

    bool HeatOut = false;
    bool AtPoint = false;

    [SerializeField] Vector3 currentTargetMove = new Vector3(0,2,0);

    float rotateSpeed = 1;

    [SerializeField] Animator animatorLaser;

    [SerializeField] GameObject Eyes;

    [SerializeField] AudioClip DeathSound;
    [SerializeField] AudioClip DamgeSound;
    [SerializeField] AudioClip Shooting;

    float heatOutSpeed = -4f;
    private void Start()
    {
        player = FindObjectOfType<PlayerEnitiy>();
        rigidbodyDrohne = GetComponentInParent<Rigidbody>();
        //StartCoroutine(ShootChain());
        rigidbodyDrohne.velocity = new Vector3(0,SpeedMax,0);
        SubscribeToEvents();
    }


    public override void Death()
    {
      
        Instantiate(DeathEffect,transform.position,Quaternion.identity);
        FindObjectOfType<PlayerEnitiy>().GetKill(PointsforKill); // vllt anders machen
        AudioSource.PlayClipAtPoint(DeathSound, player.transform.position, 1f);
        Destroy(gameObject);
    }

    public override void TakingHit()
    {
        print("-------------------Hit Drone----");
        TakingHit(1);
    }
    public new void TakingHit(int damg)
    {
        print("-------------------Hit DroneDDD----");
        Health = Health- damg;
        particles.Play();
        if (Health <= 0)
        {
            Death();
        }
        else
        {
            AudioSource.PlayClipAtPoint(DamgeSound, player.transform.position, 1f);
        }
    }
    private void Update()
    {
        /*// Rotateing of Gun 
        Vector3 targetDirection = player.transform.position;
        float singleStep = rotateSpeed * Time.deltaTime;

        Vector3 newDirection = Vector3.RotateTowards(transform.forward, targetDirection, singleStep, 0);
        MyGun.transform.rotation = Quaternion.LookRotation(newDirection);
        ///////////////////////////////////////////////////////////////////////////////////// */ //Funksier derzeit nicht


        Vector3 tar = player.transform.position;
        MyGun.transform.LookAt(tar);

        if (!AtPoint)
        {
            transform.LookAt(player.transform.position);
        }

       // Eyes.transform.LookAt(player.transform.position);
      

        Speeding(currentTargetMove);
    }

    private void Speeding(Vector3 point)
    {
            float newSpeed = SpeedMax * (DiffToPint(point) /5);
            if (newSpeed > SpeedMax) { newSpeed = SpeedMax; }
            if (!HeatOut)
            {
                rigidbodyDrohne.velocity = (point - transform.position).normalized * newSpeed * 1.1f;
            }
            else
            {
                rigidbodyDrohne.velocity = new Vector3(0, heatOutSpeed, 0);
            }
            if(ReachedPoint(currentTargetMove) && !AtPoint)
            {
                print("Got There");
                AtPoint = true;
                StartCoroutine(ShootChain());

            }
          
    }
    private bool ReachedPoint(Vector3 point)
    {
       
        if (DiffToPint(point) < 0.5f)
        {
            return true;
        }
        return false;
    }

    private float DiffToPint(Vector3 point) // For now maybe change Later
    {
        return Vector3.Distance(transform.position, point);
    }

    public override void UltralHit()
    {
        Death();
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.layer == 7)
        {
            TakingHit();
            if(other.gameObject.GetComponent<SurpriseProjectile>() != null) //
            {
                TakingHit(100);
            }
        }
    }
    private void Shoot()
    {
        if (!HeatOut)
        {
            AudioSource.PlayClipAtPoint(Shooting, transform.position);
            SurpriseProjectile FiredBullet = Instantiate(Projt, MyGun.transform.GetChild(0).transform.position, Quaternion.identity);
            FiredBullet.Flying((MyGun.transform.forward).normalized);
            ammo--;
            animatorLaser.SetTrigger("Shooting");
        }
        if (ammo == 0)
        {
           StartCoroutine(Heat_OutPreTimer());
        }
    }
    IEnumerator ShootChain()
    {
        while(ammo > 0)
        {
            Shoot();
            yield return new WaitForSeconds(fireRate);
        }
        
    }
    IEnumerator Heat_OutPreTimer()
    {
        yield return new WaitForSeconds(fireRate / 2);
        Heat_Out();
    }

    private void Heat_Out()
    {
        HeatOut = true;
        Destroy(gameObject, 5);
    }
    private void Heat_Out(int i)
    {
        Heat_Out();
    }

    public void SetTarget(Vector3 pos)
    {
        currentTargetMove = pos;
    }

    public void SubscribeToEvents() // Fail Safe 
    {
        SubjectEvent.WaveEnd += Heat_Out;
        SubjectEvent.PlayerDeath += Heat_Out;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveEnd -= Heat_Out;
        SubjectEvent.PlayerDeath -= Heat_Out;
  
    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
    public void MuliplySpeed(float m)
    {
        SpeedMax = SpeedMax * m;
    }
    public void AddAmmo(int moreAmmo)
    {
        ammo = ammo + moreAmmo;
    }
    public void reverseHeatOutdir()
    {
        heatOutSpeed *= -1;
    }
}
