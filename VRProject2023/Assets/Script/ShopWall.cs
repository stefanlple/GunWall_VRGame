using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ShopWall : BlockWall, IObserver
{

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

    private void SetOneBlockGreenBonus(int value){
        ObstaclesBox ob = transform.GetChild(value).GetComponent<ObstaclesBox>();
        ob.SetHealthAndColor(2, new Color32(0, 255, 0, 255), false);
    }


    private void SetUpWall()
    {
        ObstaclesBox gunUpgrade = transform.GetChild(0).GetComponent<ObstaclesBox>();
        ObstaclesBox swordUpgrade = transform.GetChild(1).GetComponent<ObstaclesBox>();
        ObstaclesBox lifeUpgrade = transform.GetChild(2).GetComponent<ObstaclesBox>();

        gunUpgrade.SetHealthAndColor(30, new Color32(81, 40, 135, 255), false);
        swordUpgrade.SetHealthAndColor(30, new Color32(137, 20, 70, 255), false);
        lifeUpgrade.SetHealthAndColor(30, new Color32(174, 12, 05, 255), false);
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

    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
}
