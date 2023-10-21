using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class SurroundDisplaySingle : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI TitleText;
    [SerializeField] TextMeshProUGUI MiddleText;
    [SerializeField] TextMeshProUGUI ButtonText;
    // Start is called before the first frame update
   
    public void GameOver(int Pointsmade,int Wave)
    {
        TitleText.text = "Game Over";
        MiddleText.text = "Wave: "+ Wave +"|Score: " + Pointsmade;
        ButtonText.text = "To Restart hold the A Button";
        Image img = GetComponent<Image>();
        img.color = new Color32(255, 0, 0, 50);
    }
    
}
