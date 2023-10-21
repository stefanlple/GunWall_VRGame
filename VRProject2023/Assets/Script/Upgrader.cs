using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Upgrader : MonoBehaviour
{
    [SerializeField] string Despriction;
    IUpgradeble ToUpgrade;
    [SerializeField] int myUpgradeId = 1;

    private void Start()
    {
        ToUpgrade = (IUpgradeble)GetComponent(typeof(IUpgradeble));
        if(ToUpgrade == null)
        {
            ToUpgrade = (IUpgradeble)GetComponentInParent(typeof(IUpgradeble)); 
        }
        //DoUpgrade();
    }
    public void DoUpgrade()
    {
       ToUpgrade.Upgrade(myUpgradeId);
    }
  
    public bool CheckReachedMaxUpgrade()
    {
        print(ToUpgrade.ReachedMaxUpgrade(myUpgradeId));
        return ToUpgrade.ReachedMaxUpgrade(myUpgradeId);
    }



    
}
