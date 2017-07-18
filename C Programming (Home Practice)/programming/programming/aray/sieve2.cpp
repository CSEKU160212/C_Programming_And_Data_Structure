#include <stdbool.h>
#include <stdio.h>
#define MAX 100

int main()
{
    bool sieve[MAX];
    int i, j, primecount = 0, prime[MAX];

    for (i = 0; i < MAX; i++)
    {
        sieve[i] = true;
        sieve[0] = sieve[1] = false;
    }
    for (i = 2; i < MAX; i++)
    {
        if (!sieve[i])
        {
            continue;
        }
        prime[primecount++] = i;
        for (j = i * i; j < MAX; j += i)
        {
            sieve[j] = false;
        }
    }
    for (i = 0; i < primecount; i++)
    {
        printf("%d\n", prime[i]);
    }
}

