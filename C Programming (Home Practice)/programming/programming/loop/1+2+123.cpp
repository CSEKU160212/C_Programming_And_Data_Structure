#include<stdio.h>
int main()
{
    int n, sum=0,i,j;

    printf("Please enter an integer, n = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        for(j=1; j<=i; j++)
        {
            sum = sum + j;
        }
    printf("sum = %d", sum);


    return 0;
}
