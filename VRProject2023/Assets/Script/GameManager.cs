using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour,IObserver
{
    [SerializeField] float PauseTime;
    [SerializeField] int currentWave = 1;
    [SerializeField] ShopGeneral ShopS;
    [SerializeField] GameObject ShopPoint;


    private void Start()
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
    private void OnDisable()
    {
        UnsubscribeToAllEvents();
    }
}
