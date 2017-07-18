#include<stdio.h>
#define PI 3.1415926

double sin(double x)
{
    ///x-x^3/3!+x^5/5!-x^7/7!+...........
    int y=x;
    x=(x-y)+y%360;
    x*=(PI/180);
    int sign=1;
    double res=0;
    for(int i=1; ;i+=2)
    {
        double pow=1,fac=1;
        for(int j=1;j<=i;j++)
        {
            pow*=x;
            fac*=j;
        }
        if(pow/fac==0)break;
        res+=(pow/fac)*sign;
        sign*=-1;
    }
    return res;
}
int main()
{
    double angle,res;
    while(1)
    {
        printf("enter angle:");
        scanf("%lf",&angle);
        printf("res=%lf\n",sin(angle));
        printf("\n");
    }
}
