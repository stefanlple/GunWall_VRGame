using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SingleFracture : MonoBehaviour
{
    [SerializeField] float Waitbefore = 1.75f;
    [SerializeField] float time = 2f;
    [SerializeField] float Fullsteps = 100;
    UnfreezeFragment unfreeze;
    [SerializeField] Vector3 minVectorPush = new Vector3(10,1,1);
    [SerializeField] Vector3 maxVectorPush = new Vector3(20, 3, 10);
    [SerializeField] float mulitply = 1;
    Vector3 bonusImpact = Vector3.zero;
    void Start()
    {
        GoPush();
    }

    public void GoPush()
    {
        Push(((new Vector3(UnityEngine.Random.Range(minVectorPush.x, maxVectorPush.x), UnityEngine.Random.Range(minVectorPush.y, maxVectorPush.y), UnityEngine.Random.Range(minVectorPush.z, maxVectorPush.z))) + bonusImpact) * mulitply);
    }

    public void StartingFragment()
    {
        
      //  unfreeze.UnfreezeThis();
        
      
      
    }
    public void SetBonusImpact(Vector3 imp)
    {
        bonusImpact = imp;
        print("Hit with Extra Extra");
    }
    public void StartDisappear()
    {
        StartCoroutine(SlowDisappear());
    }
    IEnumerator SlowDisappear() // Vllt. Animation umwandeln (nur dann müsste für Varaation mehere Instantzen gemacht werden
    {
        //print("Starting");
        Vector3 startSize = gameObject.transform.localScale;
        yield return new WaitForSeconds(Waitbefore);
        for (int steps = (int)Fullsteps; steps > 0; steps--)
        {
            gameObject.transform.localScale = startSize * (steps / Fullsteps);
            
           
            yield return new WaitForSeconds(time/Fullsteps);
        }
        Destroy(this.gameObject);

       
    }
    public void Push(Vector3 push)
    {
        GetComponent<Rigidbody>().velocity = push;
    }
    public void SetMaterial(Material outside,Material inside)
    {
        SetMaterial(outside);
        GetComponent<MeshRenderer>().materials[1] = inside;
    }
    public void SetMaterial(Material outside)
    {
        Renderer meshRender = GetComponent<MeshRenderer>();
        gameObject.GetComponent<Renderer>().material.color = outside.color;
    
    }
    public void KillSomeFracts(int i) // wird vermutlich verworfen 
    {
        for (int x =i; i < 0; i--)
        {
            Destroy(transform.GetChild(transform.childCount - 1));
        }
    }
    public void Impact(Vector3 impact)
    {

    }
}
