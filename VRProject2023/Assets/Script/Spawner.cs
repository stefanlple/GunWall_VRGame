using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public abstract class Spawner : MonoBehaviour, IObserver
{
    public float timeintervall = 3f;
    protected bool running = true;
    public bool StartAtSceneLoad = false;
    public bool setHeight = true;
    public int HPPlus = 0;

    public WaveValues[] StroningTable; // System wird wahrschenilich ersetzt 




    public abstract void NextWaveStart(int waveC);
    
    public virtual void StartWallSpawing()
    {
        running = true;
        if (setHeight)
        {
            SetHeight(FindObjectOfType<PlayerEnitiy>().transform.position.y);
        }
       // StartCoroutine(SpawnProced(false));
    }

    public abstract IEnumerator SpawnProced(bool WarmUp);

    public void StopWallSpawing(int i)
    {
        StopWallSpawing();

    }
    public void StopWallSpawing()
    {
        running = false;

    }
    public void SetHeight(float newHeight) // Anscheind noch nicht ganz perfekt aber erstmal ausrechend
    {
        transform.position = new Vector3(transform.position.x, newHeight, transform.position.z);
    }

    public IEnumerator GoForStrongingTable()
    {
        foreach (WaveValues WV in StroningTable)
        {
            timeintervall = WV.newtimeintervall;
            yield return new WaitForSeconds(WV.timetoNextChange);
        }   
    }


    public void SubscribeToEvents()
    {
        SubjectEvent.PlayerDeath += StopWallSpawing;
        SubjectEvent.Starting += StartWallSpawing;
        SubjectEvent.WaveBeginn += NextWaveStart;
        SubjectEvent.WaveEnd += StopWallSpawing;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.PlayerDeath -= StopWallSpawing;
        SubjectEvent.Starting -= StartWallSpawing;
        SubjectEvent.WaveBeginn -= NextWaveStart;
        SubjectEvent.WaveEnd -= StopWallSpawing;
    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
}
