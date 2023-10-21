using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MessageBox : MonoBehaviour, IObserver
{
    bool showAtNextWave = false;
    [SerializeField] GameObject robj;
    private void Start()
    {
        SubscribeToEvents();
    }
    public void SubscribeToEvents()
    {
        SubjectEvent.WaveBeginn += ShowNWave;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveBeginn -= ShowNWave;
    }
    private void ShowNWave(int i)
    {
        if (showAtNextWave)
        {
            robj.SetActive(true); 
           
        }

    }

    public void Disap()
    {
        robj.GetComponent<Animator>().SetTrigger("Show");
        Destroy(gameObject, 1);
        showAtNextWave = false;
    }

    public void ActivateMessage()
    {
        showAtNextWave = true;
    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
}
