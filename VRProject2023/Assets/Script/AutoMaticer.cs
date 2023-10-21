using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoMaticer : MonoBehaviour
{
    [SerializeField] FireWeapon firearm;
    [SerializeField] float repattimer = 1;
    void Start()
    {
        StartCoroutine(ShootTest());
    }

    IEnumerator ShootTest()
    {
        while (true)
        {
            yield return new WaitForSeconds(repattimer);
            firearm.Shooting();
        }
    }
}
