using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SurpriseProjectile : Enemy
{
    Rigidbody rigib;
    [SerializeField] float Speed = 10;
    [SerializeField] AudioClip Hitting;
    bool mirrowed = false;
    private void Start()
    {
        rigib = GetComponent<Rigidbody>();
        // Flying(new Vector3(0, 0, -1));
        Destroy(gameObject, 20);
    }
    public override void Death()
    {
       
    }
    public override void TakingHit()
    {
        
    }
    public override void TakingHit(Transform transormHit)
    {
        if (!mirrowed)
        {
            // GetComponent<Collider>().isTrigger = false;
            GetComponent<Rigidbody>().useGravity = false;
            Rigidbody rigi = GetComponent<Rigidbody>();
            rigi.velocity = (-rigi.velocity + transormHit.GetComponentInParent<Rigidbody>().velocity) * 1.2f;
            print("-|" + transormHit.forward * 20);

            AudioSource.PlayClipAtPoint(Hitting, transform.position);
            /* var slicer = GetComponent<Slice>();
             var sliceNormal = transormHit.forward;
             var sliceOrigin = transormHit.position; 

             slicer.ComputeSlice(sliceNormal, sliceOrigin); */

            gameObject.layer = 7; // 7 = PlayerAttack
            mirrowed = true;
            GetComponent<AudioSource>().Stop();
        }

    }

    public override void UltralHit()
    {
        Death();
    }
    public void Flying(Vector3 dir)
    {
        transform.forward = dir;
        if (rigib)
        {
            rigib.velocity = dir * Speed;
        }
        else
        {
            GetComponent<Rigidbody>().velocity = dir * Speed;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.layer == 6)
        {
            GetComponent<AudioSource>().Stop();
         
        }
       
    }



}
