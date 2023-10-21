using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllableWeapon : MonoBehaviour
{
    protected bool leftHand = true;
    protected OVRInput.Button usebutton = OVRInput.Button.PrimaryIndexTrigger;
    protected OVRInput.Button altusebutton = OVRInput.Button.SecondaryIndexTrigger;

    protected void SwitchButtons()
    {
        OVRInput.Button cacheB = altusebutton;
        altusebutton = usebutton;
        usebutton = cacheB;
        leftHand = !leftHand;
    }
}
