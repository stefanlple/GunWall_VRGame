using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleSpawner : MonoBehaviour
{
    [SerializeField] GameObject toSpawn;
     public void SpawneShop()
     {
         Instantiate(toSpawn, transform.position, Quaternion.identity);
     }
}
