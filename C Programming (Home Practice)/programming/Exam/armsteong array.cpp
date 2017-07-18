#include<stdio.h>
int main()
{
    int a[100],i,j,n,num,pow,sum=0;
    scanf("%d",&n);
    num = n;
    for(i=0;;i++)
    {
        a[i]=n%10;
        n/=10;
        if(n==0)
        {
            break;
        }
    }
    for(j=0;j<=i;j++)
    {
        pow  =1;
        for(int k=1;k<=i+1;k++)
        {
            pow*=a[j];
        }
        sum+=pow;
    }
    if(sum==num)
    {
        printf("armstrong\n");

    }
    else
    {
        printf("Not armstrong");
    }
}
