using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner_BlockWall : Spawner, IObserver
{

    [SerializeField] BlockWall WallPref;
    [SerializeField] BlockWall DoorPref;
    [SerializeField] float DoorChange = 20;

    [SerializeField] int WallThisRound = 10;
    [SerializeField] int WallCountMax = 10;
    [SerializeField] float General_increaseCount = 1.1f;

    bool DelayOneTime = false;

    [SerializeField] DroneSpawner SubSpawner;

    [SerializeField] ParticleSystem PSystems;
    // Start is called before the first frame update
    void Start()
    {
        if (StartAtSceneLoad) // Zum testen hier 
        {
            StartWallSpawing();
        }
        SubscribeToEvents();
    }

    public override IEnumerator SpawnProced(bool WarmUp)
    {
        if (SubSpawner)
        {
            SubSpawner.ActivateByOverlord(GetWaveTime());
        }
        running = true;
        if (WarmUp)
        {
            yield return new WaitForSeconds(timeintervall / 2);
        }

        while (running)
        {
            PSystems.Play();
            yield return new WaitForSeconds(0.01f);
            BlockWall Wall;
            if (UnityEngine.Random.Range(0, 100) >= DoorChange)
            {
                Wall = Instantiate(WallPref, transform.position, Quaternion.identity);

            }
            else
            {
                Wall = Instantiate(DoorPref, transform.position, Quaternion.identity);
            }
            if (WallThisRound == 1)
            {
                Wall.gameObject.GetComponent<BlockPassCheck>().SetLast();
                running = false;
            }
            if(HPPlus != 0)
            {
                Wall.HealthBuffing(HPPlus);
            }
            WallThisRound--;

            yield return new WaitForSeconds(timeintervall-0.01f);

            if (DelayOneTime)
            {
                DelayOneTime = false;
                yield return new WaitForSeconds(timeintervall);
            }
        }

    }
    public override void NextWaveStart(int waveC)
    {
        WallCountMax = (int)(WallCountMax * General_increaseCount);
        WallThisRound = WallCountMax;
        if(waveC == 11)
        {
            General_increaseCount = 1.05f;
        }

        if (waveC == 2)
        {
            timeintervall = 5.5f;
        }
        if (waveC == 3)
        {
            timeintervall = 5f;
        }
        if (waveC == 4)
        {
            HPPlus++;
        }
        if (waveC >= 5 && waveC <= 13 && waveC % 2==0)
        {
            HPPlus++;
        }
        if (waveC == 5)
        {
            timeintervall = 4.75f;
        }
        if (waveC == 6)
        {
            timeintervall = 4.5f;
        }
        if (waveC == 8)
        {
            timeintervall = 4f;
        }
        StartCoroutine(SpawnProced(false));
    }
    public override void StartWallSpawing()
    {
        base.StartWallSpawing();
        StartCoroutine(GoForStrongingTable());
        StartCoroutine(SpawnProced(false));

    }
    public float GetWaveTime()
    {
        return WallCountMax * timeintervall;
    }

    
}
