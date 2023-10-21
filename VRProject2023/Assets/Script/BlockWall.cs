using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BlockWall : MonoBehaviour,IObserver
{
    [SerializeField] GameObject UltraHitEffectOverride;
    protected Rigidbody rigibody;
    public float Speed = 8;
    public int PointsYellow = 1;
    public int PointsGreen = 2;
    
    Tuple<int, int>[] possibles =
    {
        new Tuple<int, int>(3,6),
        new Tuple<int, int>(4,7),
        new Tuple<int, int>(5,8),
    };
    public int HealthKillableBlock = 2;

    protected int[] bonusPossibilities = {0,1,2};

    // Start is called before the first frame update
    void Start()
    {
        SubscribeToEvents();
        rigibody = GetComponent<Rigidbody>();
        rigibody.velocity = new Vector3(0, 0, -Speed);
        foreach (ObstaclesBox ob in transform.GetComponentsInChildren<ObstaclesBox>()) // ! Workaround da wegen Block Destructionn jetzt jeder einzel Block einen Rigibodsy ben�tigt. 
        {
            ob.GetComponent<Rigidbody>().velocity = rigibody.velocity;
        }
        SetUpWall();
        Destroy(gameObject, 15); // Sp�ter druch einen Effekt ersetzten als stump verschwinden lassen
    }
    
    private void SetUpWall()
    {

        int bonusIndex=UnityEngine.Random.Range(0, bonusPossibilities.Length);
        Tuple<int, int> row = possibles[UnityEngine.Random.Range(0, possibles.Length)];

        SetOneBlockYellow(row.Item1);
        SetOneBlockYellow(row.Item2);

        SetOneBlockGreenBonus(bonusPossibilities[bonusIndex]);
    }


    protected void SetOneBlockGreenBonus(int value){
        ObstaclesBox ob = transform.GetChild(value).GetComponent<ObstaclesBox>();
        ob.SetHealthAndColor(HealthKillableBlock +1, new Color32(0, 255, 0, 255), false);
        ob.Set_PointsforKill(PointsGreen);
    }

    private void SetOneBlockYellow(int value)
    {
        ObstaclesBox ob = transform.GetChild(value).GetComponent<ObstaclesBox>();
        if (ob)
        {
            ob.SetHealthAndColor(HealthKillableBlock, new Color32(255, 255, 0, 255), false);
            ob.Set_PointsforKill(PointsYellow);
        }
        else
        {
            transform.GetChild(value).GetChild(0).GetComponent<ObstaclesBox>().SetHealthAndColor(2, new Color32(255, 255, 0, 255), false);
        }
        
    }
    public void FullColapse()
    {
        foreach (ObstaclesBox ob in GetComponentsInChildren<ObstaclesBox>())
        {

            ob?.SetDeathEffect(UltraHitEffectOverride);
            ob?.Death();
            
        }
    }
    public void FullColapse(bool nosound)
    {
        foreach (ObstaclesBox ob in GetComponentsInChildren<ObstaclesBox>())
        {
            ob?.Set_PointsforKill(0);
            ob?.SetDeathEffect(UltraHitEffectOverride);
            ob?.Death(nosound);
          

        }
    }

    public void FullColapse(Vector3 withImpact) // Sihe Kommentar in ObstacleBLock 
    {
        foreach (ObstaclesBox ob in GetComponentsInChildren<ObstaclesBox>())
        {
            ob?.SetDeathEffect(UltraHitEffectOverride);
            ob?.Death(withImpact);

        }
    }

    public void SubscribeToEvents()
    {
        SubjectEvent.PlayerDeath += DirektDeath;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.PlayerDeath -= DirektDeath; ;
    }
    public void DirektDeath()
    {
        Destroy(gameObject);
    }
    public virtual void SpecialAlert() {}

    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
    public void SetOvverideEffekt(GameObject oveffekt)
    {
        UltraHitEffectOverride = oveffekt;
    }
    public void HealthBuffing(int morehp)
    {
        HealthKillableBlock = HealthKillableBlock + morehp;       
    }

}
