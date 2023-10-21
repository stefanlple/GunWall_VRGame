using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Health_UI : MonoBehaviour
{
    Image[] Health_Block;
    void Start()
    {
        foreach (Image img in GetComponentsInChildren<Image>())
        {
            Health_Block[Health_Block.Length] = img;
        }
    }

    public void LosingHeart(int nowHealth)
    {
        Health_Block[nowHealth].color = new Color32(255, 0, 0, 0);
    }
}
