#include<stdio.h>
#define PI 3.1415926535897932384626433832795
double cos(double x)
{
    ///1-x^2/2!+x^4/4!-x^6/6!+......
    int y=x/360;
    x=x-y*360;
    x*=(PI/180);
    int sign=-1;
    double res=1;
    for(int i=2; ;i+=2)
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
        printf("res=%lf\n",cos(angle));
        printf("\n");
    }
}
