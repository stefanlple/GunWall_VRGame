using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class SubjectEvent 
{
    public static event Action Starting;
    public static void TriggerStarting()
    {
        Starting?.Invoke();
    }
    public static event Action PlayerDeath;
    public static void TriggerOnPlayerDeath() {
        
        PlayerDeath?.Invoke(); 
    }
    
    public static event Action BlockKilled;
    public static void TriggerBlockKilled()
    {
        BlockKilled?.Invoke();
    }
    public static event Action<int> WaveBeginn;
    public static void TriggerWaveBeginn(int wave)
    {
        WaveBeginn?.Invoke(wave);
    }
    public static event Action WaveEnd;
    public static void TriggerWaveEnd()
    {
        WaveEnd?.Invoke();
    }
    /// /////////////
    public static event Action<bool> PlayerArea;
    public static void TriggerPlayerLeftArea(bool InBox)
    {
        PlayerArea?.Invoke(InBox);
    }

    



}
