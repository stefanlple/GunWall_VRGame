using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner_Projectile : Spawner
{
    PlayerEnitiy player;
    [SerializeField] SurpriseProjectile Bullet;
    bool firstTime = true;
    void Start()
    {
       player = FindObjectOfType<PlayerEnitiy>();       
       if (StartAtSceneLoad) // Zum testen hier 
       {
           StartWallSpawing();
       }
       SubscribeToEvents();
        
    }

    public override IEnumerator SpawnProced(bool WarmUp)
    {
        while (running)
        {
            Relocate();
            yield return new WaitForSeconds(timeintervall);
            SurpriseProjectile FiredBullet =  Instantiate(Bullet, transform.position, Quaternion.identity);
            FiredBullet.Flying((player.transform.position - transform.position).normalized);
            
        }
    }
    public override void StartWallSpawing()
    {
        StartCoroutine(GoForStrongingTable());
        base.StartWallSpawing();
        StartCoroutine(SpawnProced(false));
    }

    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
    private void Relocate()
    {
        if (Random.Range(0, 2) == 0)
        {
            transform.position = new Vector3(UnityEngine.Random.Range(5, 7), UnityEngine.Random.Range(0, 1.75f), transform.position.z);
        }
        else
        {
            transform.position = new Vector3(-UnityEngine.Random.Range(5, 7), UnityEngine.Random.Range(0,1.75f), transform.position.z);
        }

            
    }
    public override void NextWaveStart(int waveC)
    {
        StartCoroutine(SpawnProced(false));
    }

}

