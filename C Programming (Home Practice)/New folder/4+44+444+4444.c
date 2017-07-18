#include<stdio.h>
int main()
{
    int i, total=0,n, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum=sum*10+4;
        total=total+sum;
    }
    printf("%d", total);
}
