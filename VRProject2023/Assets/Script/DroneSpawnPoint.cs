using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroneSpawnPoint : MonoBehaviour
{
    Collider SpawnBox;

    private void Start()
    {
        SpawnBox = transform.GetChild(1).GetComponent<Collider>();
    }
    public Vector3 GetSpawnPoint()
    {
        return transform.GetChild(0).position;
    }
    public Vector3 GetPointInArea()
    {
        var bounds = SpawnBox.bounds;
        return new Vector3(
            Random.Range(bounds.min.x, bounds.max.x),
            Random.Range(bounds.min.y, bounds.max.y),
            Random.Range(bounds.min.z, bounds.max.z)
        );
    }
}
