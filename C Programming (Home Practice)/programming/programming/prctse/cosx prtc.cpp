#include<stdio.h>
#define PI 3.14159
int main()
{
    double pow,fac,prev_term,sign,res,a,x;
    int i,j;
    while(scanf("%lf",&a)==1)
    {
        res = 1;
        int s = a/360;
        a = a - s*360;
        x = PI*a/180;
        sign = -1;
        for(i=2;;i+=2)
        {
            pow = 1;fac =1;
            for(j=1;j<=i;j++)
            {
                pow*=x;
                fac*=j;
            }
            res = res + (pow/fac*sign);
            sign = sign*(-1);
            if(prev_term==pow/fac)
            {
                break;
            }
            prev_term = pow/fac;

        }
        printf("%lf\n",res);
    }
}
