using UnityEngine;

public class SquareArea : MonoBehaviour
{
    public float countdownDuration = 3f; 
    public int lifeLoss = 1; 

    private bool isPlayerInside = true;
    private float countdownTimer;

    private void Start()
    {
        countdownTimer = countdownDuration;
    }

    private void Update()
    {
        if (!isPlayerInside)
        {
            countdownTimer -= Time.deltaTime;

            if (countdownTimer <= 0f)
            {
                RemoveLife();
                ResetCountdown();
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            isPlayerInside = false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            isPlayerInside = true;
            ResetCountdown();
        }
    }

    private void ResetCountdown()
    {
        countdownTimer = countdownDuration;
    }

    private void RemoveLife()
    {
        // Logic to remove a life from the player
    }
}
