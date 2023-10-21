using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoaderr : MonoBehaviour
{
    public static bool rightHandState=true;

    public void changeValueOfRightHandState(){
        rightHandState=rightHandState?false:true;
    }

    public void LoadingSceneById(int i)
    {
        SceneManager.LoadScene(i);
    }
    public void LoadingSceneByName(string i)
    {
        SceneManager.LoadScene(i);
    }
    public void ReloadScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void quitApplication()
    {
        Application.Quit();
    }

}
