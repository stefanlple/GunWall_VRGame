using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class DoorWall : BlockWall, IObserver
{
    [SerializeField] GameObject DoorDeathEffekt;
    int[] target = {0,1,2};
    public int PointsRed = 3;


    Tuple<int, int>[] doors =
    {
        new Tuple<int, int>(3,6),
        new Tuple<int, int>(4,7),
        new Tuple<int, int>(5,8),
    };

    Tuple<int, int> door;  

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
        int targetIndex=UnityEngine.Random.Range(0, target.Length);
        int doorsIndex = UnityEngine.Random.Range(0, doors.Length);

        int bonusIndex=UnityEngine.Random.Range(0, bonusPossibilities.Length);

        while (bonusIndex==targetIndex) 
        {
            bonusIndex=UnityEngine.Random.Range(0, bonusPossibilities.Length);
        }

        SetOneBlockRed(target[targetIndex]);
        SetOneBlockGreenBonus(bonusPossibilities[bonusIndex]);

        Tuple<int, int> twoBlock = doors[doorsIndex];
        door = twoBlock;
        SetOneBlockOrange(twoBlock.Item1,0);
        SetOneBlockOrange(twoBlock.Item2,1);

       
    }

    private void SetOneBlockRed(int value)
    {
        ObstaclesBox ob = transform.GetChild(value).GetComponent<ObstaclesBox>();
        ob.SetHealthAndColor(HealthKillableBlock+1, new Color32(255, 0, 0, 255), false);
        ob.AlertOnDeath = true;
        ob.Set_PointsforKill(PointsRed);


    }

    private void SetOneBlockOrange(int value, int newIndex)
    {
        ObstaclesBox obstacle = transform.GetChild(value).GetComponent<ObstaclesBox>();
        obstacle.SetHealthAndColor(200, new Color32(255, 174, 66, 255),true );
        obstacle.SetDeathEffect(DoorDeathEffekt);
        obstacle.gameObject.transform.SetSiblingIndex(newIndex);
    }
   
    public void FullColapse()
    {
        foreach (ObstaclesBox ob in GetComponentsInChildren<ObstaclesBox>())
        {
            ob.Death();
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

    public override void SpecialAlert()
    {
       transform.GetChild(0).GetComponent<ObstaclesBox>().Death();
       transform.GetChild(1).GetComponent<ObstaclesBox>().Death();
    }

    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
}
