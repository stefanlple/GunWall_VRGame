using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Testie : MonoBehaviour, IObserver
{
    public void SubscribeToEvents()
    {
        SubjectEvent.WaveEnd += JustAMessage;
        SubjectEvent.WaveBeginn += Message;
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveEnd -= JustAMessage;
        SubjectEvent.WaveBeginn -= Message;
    }
    public void JustAMessage()
    {
        print("|||||||||||||||||||||");
        print("|It Has Ended|");
        print("|||||||||||||||||||||");

    }
    public void Message(int i)
    {
        print("|||||||||||||||||||||");
        print("|It Has Ended|");
        print("|||||||||||||||||||||");

    }
}
