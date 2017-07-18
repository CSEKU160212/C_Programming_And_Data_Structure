#include<stdio.h>
#define PI 3.141592635897
int main()
{
    double x;
    scanf("%lf",&x);
    int y = x/360;
    x = x-y*360;
    x*=(PI/180);
    int sign = -1;
    double res = 1;
    for(int i=2; ;i+=2)
    {
        double pow =1,fac = 1;
        for(int j=1;j<=i;j++)
        {
            pow*=x;
            fac*=j;
        }
        if(pow/fac==0) break;
        res+=(pow/fac)*sign;
        sign*=-1;
    }
    printf("%lf",res);
}
