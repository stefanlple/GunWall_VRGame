using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockPassCheck : MonoBehaviour
{
    bool lastWall = false;
    BlockWall blockwall;
    [SerializeField] GameObject ovverride;
    private void Start()
    {
        blockwall = GetComponent<BlockWall>();
    }
    private void OnTriggerEnter(Collider other)
    {
        WallHasPassed();
    }
    private void WallHasPassed()
    {
        blockwall.SetOvverideEffekt(ovverride);
        blockwall.FullColapse(false);
        Destroy(gameObject, 2f);
        if (lastWall)
        {
            SubjectEvent.TriggerWaveEnd();
        }
    }
    public void SetLast()
    {
        lastWall = true;
    }

}
