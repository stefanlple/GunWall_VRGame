using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SurroundDisplay : MonoBehaviour, IObserver
{
    [SerializeField] GameObject SideWrapper;

    private void Start()
    {
        SubscribeToEvents();
    }
    public void SubscribeToEvents()
    {
        SubjectEvent.PlayerDeath += PlayerDied;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.PlayerDeath -= PlayerDied;
    }
    public void PlayerDied()
    {
        foreach (SurroundDisplaySingle sds in GetComponentsInChildren<SurroundDisplaySingle>())
        {
            sds.GameOver(FindObjectOfType<PlayerEnitiy>().Points,FindObjectOfType<WaveManger>().currentWave); // Zweckweise erstmal so aber villiecht ändern 
        }
    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }
}
