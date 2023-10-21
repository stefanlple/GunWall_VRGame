using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveManger : MonoBehaviour, IObserver
{
    [SerializeField] float PauseTime;
    public int currentWave = 1;
    [SerializeField] ShopGeneral ShopS;
    [SerializeField] GameObject ShopPoint;


    private void OnEnable()
    {
        SubscribeToEvents();
    }
    public void SubscribeToEvents()
    {
        print("-------------------------------Im Scru------------");
        SubjectEvent.WaveEnd += WaveEnd;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveEnd -= WaveEnd;
    }

    void NextWave()
    {
        currentWave++;
        SubjectEvent.TriggerWaveBeginn(currentWave);
        print("PauseEnd");
    }
    public void WaveEnd()
    {
        print("Got it ---------------------------------------------------");
        StartCoroutine(WaveInterloop());
    }
    IEnumerator WaveInterloop()
    {
        print("PauseBeginn");
        ShopS.Push(ShopPoint.transform.position);
        yield return new WaitForSeconds(PauseTime);
        NextWave();
    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
}


