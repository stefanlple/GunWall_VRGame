using UnityEngine;

[RequireComponent(typeof(BoxCollider))]
public class BoxColliderVisualizer : MonoBehaviour
{
     private Color customColor = new Color(4f / 255f, 217f / 255f, 255f / 255f);
    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.green;
        Gizmos.matrix = transform.localToWorldMatrix;
        var boxCollider = GetComponent<BoxCollider>();
        Gizmos.DrawWireCube(boxCollider.center, boxCollider.size);
    }
}