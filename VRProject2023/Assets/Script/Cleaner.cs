using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cleaner : MonoBehaviour,IObserver
{
    // Start is called before the first frame update
    void Start()
    {
        SubscribeToEvents();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void CleanNow()
    {
        print("Excute:");
        foreach (GameObject oldfracture in GameObject.FindGameObjectsWithTag("Killed")) // Neuer zerstört die alten , Besser Clean Up Mechanik wird noch überlegt. 
        {
            SingleFracture f = oldfracture.AddComponent<SingleFracture>();
            f.StartDisappear();
            f.tag = "KilledClean";
            print(f.name);

        }
    }

    public void SubscribeToEvents()
    {
        SubjectEvent.BlockKilled += CleanNow;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.BlockKilled -= CleanNow;
    }
}
