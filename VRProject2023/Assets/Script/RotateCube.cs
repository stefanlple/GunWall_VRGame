using System.Collections.Generic;
using UnityEngine;

public class RotateCube : MonoBehaviour
{
    [SerializeField]
    private List<Transform> targetTransforms;

    [SerializeField]
    private float angularSpeed = 10.0f;

    [SerializeField]
    private List<float> rotationOffsets;

    private void Awake()
    {
        // Ensure there is one offset per transform
        if (rotationOffsets.Count != targetTransforms.Count)
        {
            rotationOffsets.Clear();
            for (int i = 0; i < targetTransforms.Count; i++)
            {
                rotationOffsets.Add(0.0f);
            }
        }
    }

    private void Update()
    {
        for (int i = 0; i < targetTransforms.Count; i++)
        {
            float angle = angularSpeed * Time.deltaTime + rotationOffsets[i];
            targetTransforms[i].Rotate(0, 0, angle);
        }
    }
}
