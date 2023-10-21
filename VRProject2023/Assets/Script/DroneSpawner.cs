using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroneSpawner : Spawner, IObserver
{

    [SerializeField] Drone drone;

    [SerializeField] DroneSpawnPoint[] SpawnPointSet;

    [SerializeField] int dronethisRound = 0;
    [SerializeField] int droneRoundmax = 0;// vllt Vererbung machen

    bool spawnAtWaveStart = false;

    int moreAmmo = 0;

    void Start()
    {
        SubscribeToEvents();
        if (StartAtSceneLoad) // Zum testen hier 
        {
            running = true;
            StartCoroutine(SpawnProced(false));
        }
    }


    public override void NextWaveStart(int waveC)
    {
        if(waveC % 3 == 0 && waveC > 2)
        {
            droneRoundmax++;
        }
        if(waveC == 3)
        {
            droneRoundmax = 1;
            spawnAtWaveStart = true;
        }
        if(waveC % 4 == 0)
        {
            HPPlus++;
        }
        if(waveC % 6 == 0)
        {
            moreAmmo++;
        }
        dronethisRound = droneRoundmax;
       // running = true;
       // StartCoroutine(SpawnProced(false));
    }

    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }



    public override IEnumerator SpawnProced(bool WarmUp)
    {
        print("Start Spawning **");
        if (spawnAtWaveStart)
        {
            print("Start Spawning Start**");
            SpawnDrone();
            spawnAtWaveStart = false;
            CheckIfRunning();
        }

        while (running)
        {
            print("Start Spawning long**");
            yield return new WaitForSeconds(timeintervall);
            if (running)
            {
                SpawnDrone();
                CheckIfRunning();
            }
           
        }

    }

    private void SpawnDrone()
    {
        int randomPoint = Random.Range(0, SpawnPointSet.Length);// Random Point
        print(randomPoint);
        Drone spawnedDrone = Instantiate(drone, SpawnPointSet[randomPoint].GetSpawnPoint(), Quaternion.identity);
        spawnedDrone.SetTarget(SpawnPointSet[randomPoint].GetPointInArea());
        dronethisRound--;
        if(randomPoint == 2)
        {
            spawnedDrone.MuliplySpeed(2.5f);
            spawnedDrone.reverseHeatOutdir();
        }
        if(HPPlus != 0)
        {
           spawnedDrone.AddHealth(HPPlus);
        }
        if(moreAmmo != 0)
        {
            spawnedDrone.AddAmmo(moreAmmo);
        }
    }

    private void CheckIfRunning()
    {
        if (dronethisRound <= 0)
        {
            running = false;
        }
    }

    public void ActivateByOverlord(float time)
    {
        print("Drone This REound is" + droneRoundmax + "----------------------------------------");
        if (droneRoundmax != 0)
        {
            timeintervall = time / (droneRoundmax + 2); // 1 "frei zum Start , 1 "frei" zum Schluss 
            running = true;
            StartCoroutine(SpawnProced(false));
        }
       
    }
}
