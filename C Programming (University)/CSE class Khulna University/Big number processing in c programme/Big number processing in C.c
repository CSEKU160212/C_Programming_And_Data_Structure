#include <stdio.h>

long long int factorial(int N)
{
    long long ans = 1;
    int i;
    for(i=1; i <= N; i++)
    ans *= i;
    return ans;
}

int main()
{
    int t;
    for(t=1; t <= 21; t++)
    {
        printf("%lld\n", factorial(t));
    }
    return 0;
}
