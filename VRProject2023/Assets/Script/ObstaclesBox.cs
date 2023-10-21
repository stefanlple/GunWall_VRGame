using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ObstaclesBox : Enemy
{
    Material material;
    [SerializeField] bool rebound = true;


    [SerializeField] bool testMode = false;
    Fracture fracture;

    [SerializeField] AudioClip glass;
    [SerializeField] AudioClip hit;

    [SerializeField] GameObject AlertSystems;

    [SerializeField] GameObject PreFractures;

    [SerializeField] GameObject DeathFracturingEffekt;

    [SerializeField] ParticleSystem DamagePartikel;

    //TODO
    /* [SerializeField] bool chargingGunBlock;

    [SerializeField] bool chargingSwordBlock;
    public GameObject swordCharges;

    [SerializeField] bool chargingHeathBlock; */

    public bool AlertOnDeath = false;


    // Start is called before the first frame update
    private void Start()
    {
        fracture = GetComponent<Fracture>();
        material = GetComponent<MeshRenderer>().material;
        maxHealth = Health;
        /* swordCharges=GameObject.Find("Sword"); //TODO */
    }

    private void OnTriggerEnter(Collider other)
    {
        /*
        Health--;
        //StartCoroutine(DamageShow());
        if (other.tag == "PlayerAttackSword")
        {
            if (other.GetComponent<SwordWeapon>().GetChared()) // Vllt. das vllt. �berdenken 
            {
                transform.GetComponentInParent<BlockWall>().FullColapse();
            }
        }
        DamageVisual();
        if (Health <= 0)
        {
            Death();
        }
        */
    }
  
    public void Set_PointsforKill(int i)
    {
        PointsforKill = i;
    }

    public override void TakingHit()
    {
        TakingHit(1);
    }
    public override void TakingHit(int i)
    {
        Health = Health - i;
        DamageVisual();

        //Todo
        /* if(chargingSwordBlock==true){
            swordCharges.GetComponent<SwordWeapon>().increaseChargeCount();
        } */

        if (Health == 1)
        {
            // AlertSystems?.SetActive(true);
            // DeFrezzeOperation();
        }

        if (Health <= 0) // ----
        {
            Death();
            //return true;
        }
        else if(!rebound)
        {
            DamagePartikel.Play();
        }
    }


    private void DamageVisual()
    {
        float newscale = (0.8f + (0.2f * (Health / maxHealth)));
        transform.localScale = Vector3.one * newscale;

        if (rebound)
        {
            StartCoroutine(Rebounding(newscale));
        }
        else
        {
            AudioSource.PlayClipAtPoint(hit, transform.position);
        }
    }
    IEnumerator Rebounding(float newscale)
    {
        float difftoOne = 1 - newscale;
        for (int i = 0; i < 5; i++)
        {
            yield return new WaitForSeconds(0.01f);
            transform.localScale = Vector3.one * (newscale +(difftoOne*i/5));

        }
        transform.localScale = Vector3.one;

    }
  
    public void SetHealthAndColor(int hp,Color32 color,bool rebound)
    {
        this.rebound = rebound;
        maxHealth = hp;
        Health = maxHealth;
        gameObject.GetComponent<Renderer>().material.color = color;
        ParticleSystemRenderer psr = DamagePartikel.GetComponent<ParticleSystemRenderer>();
        psr.material.color = color;
        psr.material.SetColor("_EmissionColor", color);
    }
    public override void Death()
    {
        DeathOperationGeneral(true);
        SpawnDeathEffekt();
        Destroy(gameObject);
    }
    public void Death(bool e)
    {
        DeathOperationGeneral(e);
        SpawnDeathEffekt();
        Destroy(gameObject);
    }
    private void SpawnDeathEffekt()
    {
        GameObject DeathEf = Instantiate(DeathFracturingEffekt, transform.position, Quaternion.identity);
        DeathEf.GetComponent<BlockDeathEffect>().Setup(transform.localScale, gameObject.GetComponent<Renderer>().material); // PolyMorph
    }


    private void DeathOperationGeneral(bool sound)
    {
        if (sound)
        {
            AudioSource.PlayClipAtPoint(glass, transform.position);
        }
        if (!testMode) { FindObjectOfType<PlayerEnitiy>().GetKill(PointsforKill); }// vllt anders machen

        AlertFullWall();

        GetComponent<BoxCollider>().isTrigger = false;
       
        //GetComponent<Rigidbody>().useGravity = true;



        gameObject.tag = "Killed"; // weil sonst Fehler wegen Tag abfrage , Fracture erben Eigenschafften wie diese       

        if (fracture)
        {
            fracture.CauseFracture();
            //CleanUp();
        }
        else if (PreFractures)
        {
            foreach (SingleFracture SF in (PreFractures.GetComponentsInChildren<SingleFracture>()))
            {
                SF?.StartDisappear();

            }

        }
        //SubjectEvent.TriggerBlockKilled();
    }

    private void DeFrezzeOperation()
    {
        PreFractures.transform.localScale = transform.localScale;
        PreFractures.SetActive(true);
        foreach (SingleFracture SF in (PreFractures.GetComponentsInChildren<SingleFracture>()))
        {
            SF.StartingFragment();
            SF.GetComponent<Rigidbody>().velocity = GetComponent<Rigidbody>().velocity; // Komentar der sagt das man hier dar�ber nachdenket hier , vllt wirklich in Raycast umschalten und dann Zefallen hardcoden
        }
        
    }

    private static void CleanUp()
    {
        foreach (GameObject oldfracture in GameObject.FindGameObjectsWithTag("Killed")) // Neuer zerst�rt die alten , Besser Clean Up Mechanik wird noch �berlegt. 
        {
            Destroy(oldfracture);
        }
    }

    public override void UltralHit()
    {
        transform.GetComponentInParent<BlockWall>().FullColapse();
        print("UltraHit");
    }
  /*  public override void UltralHit(Vector3 impact) // Hat nicht so funksniert wie gedacht 
    {
        print(transform.parent.name);
        transform.GetComponentInParent<BlockWall>().FullColapse(impact); // Aufrufm��ig anpassen
    } */
    public void AlertFullWall()
    {
        if (AlertOnDeath)
        {
            transform.GetComponentInParent<BlockWall>().SpecialAlert();
        }
    }
    public void SetDeathEffect(GameObject newEffect)
    {
        DeathFracturingEffekt = newEffect;
    }


 
    /// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
    private void SpawnDeathEffekt(Vector3 impact)
    {
        GameObject DeathEf = Instantiate(DeathFracturingEffekt, transform.position, Quaternion.identity);
        DeathEf.GetComponent<BlockDeathEffect>().Setup(transform.localScale, gameObject.GetComponent<Renderer>().material, impact); // PolyMorph
    }

    public void Death(Vector3 impact) // Sihe Kommentar in ObstacleBLock 
    {
        DeathOperationGeneral(false);
        SpawnDeathEffekt(impact);
    }
 


}
