#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    scanf("%d",&n);
    for(i=1;n>0;i*=10)
    {
        sum+=(n%2)*i;
        n/=2;
    }
    printf("%d\n",sum);
    printf("%d",(2%2));
}
