using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IUpgradeble
{
   public void Upgrade(int id);

   public bool ReachedMaxUpgrade(int id);

   
}
