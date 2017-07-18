#include<stdio.h>
int main()
{
    int n, flag=0, i;
    scanf("%d", &n);
    if(n==0)
        goto L;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0){
            flag=1;
            printf("%d", i);
            break;
        }
        else
            flag=0;
    }
    if(flag==0)
    {
        printf("No real factor");
    }
    L: printf("\n");
    return 0;
}
