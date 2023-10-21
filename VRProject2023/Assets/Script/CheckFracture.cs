using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckFracture : MonoBehaviour
{
    ObstaclesBox mainbox;
    private void Start()
    {
        mainbox = GetComponentInParent<ObstaclesBox>();
    }
    public void CheckToFracture()
    {
        print("Hiting");
        if (mainbox.Health <= 1)
        {
            print("Fracture");
            mainbox.Death();
            
        }
    }
    
}
