using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class FrontMessenger : MonoBehaviour,IObserver
{
    Animator animator;
    [SerializeField] TextMeshProUGUI message;
    int WaveNumber = 1;

    private void UpdateCount(int num)
    {
        WaveNumber = num;
    }

    // Start is called before the first frame update
    void Start()
    {
        SubscribeToEvents();
        animator = GetComponent<Animator>();

    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
    public void EndofWave()
    {
        message.text = "Wave "+WaveNumber+" Completetd";
        animator.SetTrigger("Show");
    }


    public void SubscribeToEvents()
    {
        SubjectEvent.WaveEnd += EndofWave;
        SubjectEvent.WaveBeginn += UpdateCount;
    }
    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveEnd -= EndofWave;
        SubjectEvent.WaveBeginn -= UpdateCount;
    }


}
