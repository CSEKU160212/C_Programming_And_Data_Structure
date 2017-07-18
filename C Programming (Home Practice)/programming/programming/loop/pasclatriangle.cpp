#include <stdio.h>

long fact(int n)
{
    int c;
    long res = 1;

    for (c = 1; c <= n; c++)
        res = res*c;

    return res;
}

int main()
{
    int i, n, c;

    printf("Enter the number of rows :  ");
    scanf("%d",&n);
    printf("\n");
    {

        for (i = 0; i < n; i++)
        {
            for (c = 0; c <= (n - i + 1); c++)
            {
                printf("  ");
            }

            for (c = 0 ; c <= i; c++)
            {
                printf("%3ld ",fact(i)/(fact(c)*fact(i-c)));
            }

            printf("\n");
        }

        return 0;

    }
}
