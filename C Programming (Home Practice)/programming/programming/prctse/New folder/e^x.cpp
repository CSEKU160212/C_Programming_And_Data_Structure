#include<stdio.h>
int main()
{
    double res,pow,fact,prev,a;
    while(scanf("%lf",&a)==1)
    {
        prev = 1;
        res = 1;
        for(int i=1; ;i++)
        {
            pow =1;
            fact = 1;
            for(int j=1;j<=i;j++)
            {
                pow*=a;
                fact*=j;
            }
            res = res+pow/fact;
            if(prev==res)
            {
                break;
            }
            prev = res;
        }
        printf("%lf\n",res);
    }
}
