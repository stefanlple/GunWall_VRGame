using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateFracture : BlockDeathEffect
{
    // Start is called before the first frame update
    void Start()
    {
       StartCoroutine(DespairAll());

    }
    IEnumerator DespairAll()
    {
        foreach (SingleFracture sf in GetComponentsInChildren<SingleFracture>())
        {
            sf.StartDisappear();
        }
        yield return new WaitForSeconds(5);
        Destroy(gameObject);
    }
    
}
