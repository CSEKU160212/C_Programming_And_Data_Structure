#include<stdio.h>
int main()
{
    double prev=1,res=1,pow,fact,a;
    scanf("%lf",&a);
    for(int i=1;;i++)
    {
        pow =1;
        fact=1;
        for(int j=1;j<=i;j++)
        {
            pow*=a;
            fact*=j;
        }
        res+=pow/fact;
        if(prev==res)
        {
            break;
        }
        prev=res;
    }
    printf("%lf",res);
}
