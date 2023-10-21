using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour,IObserver
{
    Rigidbody rigibody;
    public float Speed;
    [SerializeField] int damage = 1;
    // Start is called before the first frame update
    void Start()
    {
        rigibody = GetComponent<Rigidbody>();
        rigibody.velocity = transform.forward * Speed;
        Destroy(gameObject, 20);
    }


    private void OnTriggerEnter(Collider other)
    {

        if (other.tag == "Enemy") // Wollte zu erst den Typ machen aber das geht nicht so leicht
        {
            other.GetComponent<Enemy>()?.TakingHit(damage);
        }
        if (other.tag == "EnemyPrev") // Wollte zu erst den Typ machen aber das geht nicht so leicht
        {
            other.GetComponent<CheckFracture>().CheckToFracture();
        }
        else
        {
            Destroy(gameObject); // später austauschen mit einen Effekt bevor es gelöscht wird }

        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        /*
        bool killed = false;
        if (collision.gameObject.tag == "Enemy") // Wollte zu erst den Typ machen aber das geht nicht so leicht
        {
           killed = collision.gameObject.GetComponent<Enemy>().TakingHit();
        }
        if (!killed)
        {
           // Destroy(gameObject); // später austauschen mit einen Effekt bevor es gelöscht wird      
        }
        */
       
    }
    public void SetDamage(int newDmg)
    {
        damage = newDmg;
    }

    public void SubscribeToEvents()
    {
        SubjectEvent.WaveEnd += CleanUp;
    }
    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveEnd -= CleanUp;
    }
    private void CleanUp()
    {
        StartCoroutine(CleaningAway());
    }
    IEnumerator CleaningAway()
    {
        GetComponent<Collider>().enabled = false;
        for (int i = 0; i < 3; i++)
        {
            yield return new WaitForSeconds(0.01f);
            transform.localScale = transform.localScale * 0.5f;
        }
        Destroy(gameObject);
    }
}
