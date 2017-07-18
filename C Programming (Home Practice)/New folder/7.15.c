#include<stdio.h>
int main()
{
    int i, n, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
    sum=sum+(3*i-1)*(3*i+2)*(3*i+5);
    }
    printf("%d", sum);
}
