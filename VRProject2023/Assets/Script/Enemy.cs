using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Enemy : MonoBehaviour
{
    public int Health;
    protected int maxHealth;
    public int PointsforKill = 0;
    public abstract void TakingHit();

    public virtual void TakingHit(Transform transform)
    {
        TakingHit();
    }
    public virtual void TakingHit(int i)
    {
        TakingHit();
    }

    public abstract void Death();

    public abstract void UltralHit();

    public virtual void UltralHit(Transform transform)
    {
        UltralHit();
    }
    public virtual void UltralHit(Vector3 impact)
    {
        UltralHit();
    }
    public void AddHealth(int morehp)
    {
        Health = Health + morehp;
    }


}
