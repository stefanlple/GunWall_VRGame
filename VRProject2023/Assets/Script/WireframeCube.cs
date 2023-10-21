using UnityEngine;
using System.Linq;

[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public class WireframeCube : MonoBehaviour
{
    private Color wireframeColor = Color.yellow;//new Color(4f / 255f, 217f / 255f, 255f / 255f);
    public float lineWidth = 0.01f;

    private void Awake()
    {
        MeshFilter meshFilter = GetComponent<MeshFilter>();
        MeshRenderer meshRenderer = GetComponent<MeshRenderer>();

        Mesh originalMesh = meshFilter.sharedMesh;
        Vector3[] originalVertices = originalMesh.vertices;

        Vector3[] wireframeVertices = new Vector3[originalVertices.Length];
        for (int i = 0; i < originalVertices.Length; i++)
        {
            wireframeVertices[i] = originalVertices[i];
        }

        Mesh wireframeMesh = new Mesh();
        wireframeMesh.vertices = wireframeVertices;
        wireframeMesh.SetIndices(Enumerable.Range(0, wireframeVertices.Length).ToArray(), MeshTopology.Lines, 0);

        meshFilter.mesh = wireframeMesh;

        meshRenderer.material = new Material(Shader.Find("Custom/WireframeShader"));
        meshRenderer.material.SetColor("_WireframeColor", wireframeColor);
        meshRenderer.material.SetFloat("_LineWidth", lineWidth);
    }
}
