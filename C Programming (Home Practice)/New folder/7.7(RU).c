#include<stdio.h>
int main()
{
    int i, n, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum=sum+(3*i-1)*(2*i-1);
    }
    printf("%d", sum);
}

