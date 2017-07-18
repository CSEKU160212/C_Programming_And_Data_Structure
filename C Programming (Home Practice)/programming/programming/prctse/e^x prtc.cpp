#include<stdio.h>
int main()
{
    double a,res,pow,fac,prev;
    int i,j;
    while(scanf("%lf",&a)==1)
    {
        prev = 1;
        res = 1;
        for(i=1;;i++)
        {
            pow = 1;
            fac = 1;
            for(j=1;j<=i;j++)
            {
                pow*=a;
                fac*=j;
            }
            res = res + pow/fac;
            if(prev==res)
            {
                break;
            }
            prev = res;
        }
        printf("%lf\n",res);
    }
}
