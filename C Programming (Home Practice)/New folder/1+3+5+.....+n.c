#include<stdio.h>
int main()
{
    int i, n, sum=0;
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        if(i%2==0)
            continue;
        sum=sum+i;
    }
    printf("%d", sum);
}

