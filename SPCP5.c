#include <stdio.h>
#include <math.h>

int main() 
{
    int numTests;
    scanf("%d", &numTests);

    for (int testIndex = 0; testIndex < numTests; ++testIndex) 
    {
        int moveCount = 0;
        int power = 1;
        int currentHealth;
        scanf("%d", &currentHealth);

        while (currentHealth > 0) 
        {
            int isPrime = 1;
            if (currentHealth <= 1) 
            {
                isPrime = 0;
            } 
            else 
            {
                for (int divisor = 2; divisor <= sqrt(currentHealth); ++divisor) 
                {
                    if (currentHealth % divisor == 0) 
                    {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if (isPrime) 
            {
                moveCount += 1;
                currentHealth = 0;
                break;
            } 
            else 
            {
                currentHealth -= power;
                power *= 2;
                moveCount += 1;
            }
        }

        if (currentHealth == 0) 
        {
            printf("%d\n", moveCount);
        } 
        else 
        {
            printf("-1\n");
        }
    }

    return 0;
}
