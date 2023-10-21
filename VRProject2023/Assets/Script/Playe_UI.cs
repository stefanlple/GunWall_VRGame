using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Playe_UI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI PointText;

    [SerializeField] GameObject Healthhearts;
    Image[] Health_Block;

    [SerializeField] Image BloodDeath;
    [SerializeField] TextMeshProUGUI DeathText;
    [SerializeField] TextMeshProUGUI OtherDeathText;

    private void Start()
    {
        Health_Block = Healthhearts.GetComponentsInChildren<Image>(true);
    }

    public void Set_PointText(string text)
    {
        PointText.text = text;
    }
    public void HeartUiChange(int nowHealth,bool Losing)
    {
        if (nowHealth >= 0)
        {
            if (Losing)
            {
                Image HealthImg = Health_Block[nowHealth];
                HealthImg.color = new Color32(0, 0, 0, 127);
                HealthImg.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f) * 0.5f;
            }
            else
            {
                for (int i = 0; i < nowHealth; i++)
                {
                    Image HealthImg = Health_Block[i];
                    HealthImg.color = new Color32(255, 0, 0, 255);
                    HealthImg.transform.localScale = new Vector3(0.1f,0.1f,0.1f);
                }
               
            }

        }
       
    }
    public void SetExtraHeart(int i)
    {
        Health_Block[i-1].gameObject.SetActive(true);
    }


    IEnumerator HitHShow()
    {
        BloodDeath.color = new Color32(255, 0, 0, 50);
        for (int i = 5; i > 0; i--)
        {
            i *= 10;
            BloodDeath.color = new Color32(255, 0, 0, (byte)i);
            yield return new WaitForSeconds(0.001f);
        }

    }
    public IEnumerator HitDeath(int Points)
    {
        print("DeathShow");
       // BloodDeath.color = new Color32(255, 0, 0, 70);
        yield return new WaitForSeconds(0.001f);
        /*for (int i = 7; i < 20; i++) 
        {
            i *= 10;
            BloodDeath.color = new Color32(255, 0, 0, (byte)i);
            yield return new WaitForSeconds(0.001f);
        }*/
        BloodDeath.color = new Color32(255, 0, 0, 255);
        DeathText.text = "Dead" +"\n Point: " + Points;
        DeathText.color = new Color32(255, 255, 255, 255);
        OtherDeathText.color = new Color32(255, 255, 255, 255);

    }
   
}
