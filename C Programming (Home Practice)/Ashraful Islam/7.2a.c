#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i, n, sum=0;\
 scanf("%d", &n);
 for(i=1; i<=n; i++)
    {
    sum=sum+2*i;
    }
 printf("%d", sum);
return 0;
}
