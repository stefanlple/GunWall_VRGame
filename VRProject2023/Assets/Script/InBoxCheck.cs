using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InBoxCheck : MonoBehaviour
{
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player") // Fail Safe , sollte keine andere Exits überhaupt erkennen 
        {
            SubjectEvent.TriggerPlayerLeftArea(false);
            
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player") // Fail Safe , sollte keine andere Exits überhaupt erkennen 
        {
            SubjectEvent.TriggerPlayerLeftArea(true);

        }
    }
}
