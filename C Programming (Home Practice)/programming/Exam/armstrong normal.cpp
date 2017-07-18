#include<stdio.h>
int main()
{
    int i,j,k,c,ans,rem,num,numb,n,res;
    while(scanf("%d",&numb)==1)
    {
        if(numb<0)
        {
            break;
        }
        res = 0;
        n =numb;
        num = numb;
        for(i=1;;i++)
        {
            rem = n%10;
            n/=10;
            c =i;
            if(n==0)
            {
                break;
            }
        }
        for(j=1;j<=c;j++)
        {
            rem = num%10;
            ans = 1;
            for(k=1;k<=c;k++)
            {
                ans*=rem;
            }
            num/=10;
            res+=ans;
        }
        if(res==numb)
        {
            printf("armstrong\n");
        }
        else
        {
            printf("Not armstrong");
        }
    }
}
