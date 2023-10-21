using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockDeathEffect : MonoBehaviour
{
    [SerializeField] bool reverse = false;
    public void Setup(Vector3 Scale)
    {
        transform.localScale = Scale;
    }
    public void Setup(Vector3 Scale, Material OuterMaterial)
    {
        Setup(Scale);
        foreach (SingleFracture Sf in GetComponentsInChildren<SingleFracture>())
        {
            Sf.SetMaterial(OuterMaterial);
           // Sf.GoPush();
        }

    }
    public void Setup(Vector3 Scale, Material OuterMaterial,Vector3 impact)
    {
        Setup(Scale);
        foreach (SingleFracture Sf in GetComponentsInChildren<SingleFracture>())
        {
            Sf.SetMaterial(OuterMaterial);
            Sf.SetBonusImpact(impact);
           // Sf.GoPush();
        }

    }
    public void Setup(Vector3 Scale, Material OuterMaterial, Material InnerMaterial)
    {
        Setup(Scale,OuterMaterial);
    }


    public void SimpleDestroy(float time) // Für den Animator bei DoorEffekt 
    {
        Destroy(gameObject, time);
    }
}
