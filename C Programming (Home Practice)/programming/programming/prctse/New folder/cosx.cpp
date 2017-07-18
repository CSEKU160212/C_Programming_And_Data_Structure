#include<stdio.h>
#define PI 3.14152653589
int main()
{
    double pow,res,prev_term,a,fact,sign,x;
    int i,j,s;
    while(scanf("%lf",&a)==1)
    {
        res =1;
        s = a/360;
        a = a-s*360;
        x = a*PI/180;
        sign = -1;
        for(i=2; ; i+=2)
        {
            pow =1;
            fact = 1;
            for(j=1; j<=i; j++)
            {
                pow*=x;
                fact*=j;
            }
            res = res+(pow/fact*sign);
            sign= sign*(-1);
            if(prev_term==pow/fact)
            {
                break;
            }
            prev_term = pow/fact;
        }
        printf("%.4lf\n",res);


    }

}
