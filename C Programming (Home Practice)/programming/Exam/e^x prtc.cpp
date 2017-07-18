#include<stdio.h>
int main()
{
    double res,a,prev,pow,fac;
    scanf("%lf",&a);
    prev = 1;
    res =1;
    for(int i=1;;i++)
    {
        pow =1,fac=1;
        for(int j=1;j<=i;j++)
        {
            pow*=a;
            fac*=j;
        }
        res = res + (pow/fac);
        if(prev == res)
        {
            break;
        }
        prev = res;
    }
    printf("%lf",res);

}
