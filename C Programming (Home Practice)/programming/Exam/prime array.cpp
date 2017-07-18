#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,p,n,a[1000],isprime;
    scanf("%d",&n);
    printf("\n");
    p = 0;
    for(i=2;p<n;i++)
    {
        isprime = 1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                isprime = 0;
            break;
        }
        if(isprime==1)
        {
            a[p++] = i;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

