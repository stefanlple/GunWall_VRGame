using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UpgradeBlock : Enemy
{
    [SerializeField] Upgrader upgrader;
    [SerializeField] int coast = 30;
    bool lockedMode = false;
    PlayerEnitiy player; // Nur mal Vorlaufig wird Architkur m‰ﬂig noch ge‰ndert 
    [SerializeField] TextMeshProUGUI moneyText;
    Animator animator;
    [SerializeField] int plusCoast = 0;
    ShopGeneral GeneralShop;

    private void Start()
    {
        GeneralShop = GetComponentInParent<ShopGeneral>();
        moneyText.text = coast.ToString();
        player = FindObjectOfType<PlayerEnitiy>();
        animator = GetComponent<Animator>();
    }

    public override void Death()
    {
        TakingHit(); 
    }

    public override void TakingHit()
    {

        if (!upgrader.CheckReachedMaxUpgrade())
        {
            if (player.Buy(coast))
            {
                upgrader.DoUpgrade();
                animator.SetTrigger("BuyDone");
                RasingCoast();
                GeneralShop?.StartCheck();
                GeneralShop.SoundSucess();
            }
            else
            {
                Denied();
            }
        }
        else
        {
            Denied();
        }

        CheckMax();
    }

    private void Denied()
    {
        animator.SetTrigger("Denied");
        GeneralShop.SoundDenied();
    }

    public void CheckMax()
    {
        if (upgrader.CheckReachedMaxUpgrade())
        {
            moneyText.text = "MAX";

        }
        else if (!(moneyText.text == coast.ToString()))
        {
            moneyText.text = coast.ToString();
        }
    }

    public override void UltralHit()
    {
        TakingHit();
    }
    public  void RasingCoast()
    {
        coast += plusCoast;
        moneyText.text = coast.ToString();
    }
 

}
