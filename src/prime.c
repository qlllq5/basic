#include <stdio.h>
#include <stdbool.h>

#define PRIMES_SIZE 100000
#define NP_SIZE 1000000
// Non-prime
bool np[NP_SIZE + 1] = {false};
int primes[PRIMES_SIZE];
// Number of prime
int nump = 0;

// Sieve of Eratosthenes
void eratosthenes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (np[i] == false)
        {
            primes[nump++] = i;
            if ((long long)i * i > n)
            {
                continue;
            }
            for (int j = i * i; j <= n; j += i)
            {
                np[j] = true;
            }
        }
    }
}

int main(void)
{
    eratosthenes(NP_SIZE);
    printf("%d\n", nump);
    printf("%d\n", primes[nump - 1]);
    return 0;
}