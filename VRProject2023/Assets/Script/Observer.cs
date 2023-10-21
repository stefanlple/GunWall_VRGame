using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IObserver 
{
    public void SubscribeToEvents();
    public void UnsubscribeToAllEvents(); // Wenn sie gelöscht werden müssen sie sich wieder "abmelden" 
}

