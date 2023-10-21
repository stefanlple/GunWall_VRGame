using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopGeneral : MonoBehaviour,IObserver
{
    public float Speed = 8;
    Rigidbody Wallrigi;
    [SerializeField] AudioClip Sucess;
    [SerializeField] AudioClip Denied;
    PlayerEnitiy playerForPos;

    private void Start()
    {
        playerForPos = FindObjectOfType<PlayerEnitiy>();
        Wallrigi = GetComponent<Rigidbody>();
        SubscribeToEvents();
    }

    public void Push(Vector3 pos)
    {
        transform.position = pos;
        Wallrigi.velocity = new Vector3(0, 0, -Speed);
        ChildrenSameSpeed();
        //StartCoroutine(HideAfterTime(Speed));
        
        StartCheck();
    }

    private void ChildrenSameSpeed()
    {
        foreach (Rigidbody rb in GetComponentsInChildren<Rigidbody>())
        {
            print("ChildrenCheck--------------------------------------------");
            rb.velocity = Wallrigi.velocity;
        }
    }

    IEnumerator HideAfterTime(float time)
    {
        yield return new WaitForSeconds(time);
        Hide(2);
    }
    public void Hide(int wave)
    {
        if(wave != 1)
        {
            Wallrigi.velocity = new Vector3(0, 0, 0);
            transform.position = new Vector3(0, -10, 0);
            ChildrenSameSpeed();
        }
        

    }
    public void StartCheck()
    {
        foreach (UpgradeBlock upgradeBlock in GetComponentsInChildren<UpgradeBlock>())
        {
            upgradeBlock.CheckMax(); 
        }
    }

    public void SubscribeToEvents()
    {
        SubjectEvent.WaveBeginn += Hide;
    }
    private void OnDestroy()
    {
        UnsubscribeToAllEvents();
    }

    public void UnsubscribeToAllEvents()
    {
        SubjectEvent.WaveBeginn -= Hide;
    }
    public void SoundSucess()
    {
        AudioSource.PlayClipAtPoint(Sucess, playerForPos.transform.position); 
    }
    public void SoundDenied()
    {
        AudioSource.PlayClipAtPoint(Denied, playerForPos.transform.position);
    }
}
