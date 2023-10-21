using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartBlock : Enemy
{
    //[SerializeField] Spawner_BlockWall spawner;
    [SerializeField]
    GameObject DeathFracturingEffekt;

    public override void Death()
    {
        //spawner.StartWallSpawing();
        SubjectEvent.TriggerStarting();

        GameObject DeathEf = Instantiate(DeathFracturingEffekt, transform.position, Quaternion.identity);
        DeathEf.GetComponent<BlockDeathEffect>().Setup(transform.localScale, GetComponent<MeshRenderer>().material, GetComponent<MeshRenderer>().material);
        Destroy(gameObject);
    }

    public override void TakingHit()
    {
        Death();
    }

    public override void UltralHit()
    {
        Death();
    }

    
}
