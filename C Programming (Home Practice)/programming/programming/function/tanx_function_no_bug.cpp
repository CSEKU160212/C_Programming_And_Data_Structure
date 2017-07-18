#include<stdio.h>
#define PI 3.1415926535897932384626433832795
double sin(double );
double cos(double );
double e(double );
double tan(double );
int infinity_check(double );///those angle whose format like (2n+1)*90 give infinite valu for tanx

int main()
{
    double angle,res;
    while(1)
    {
        printf("enter angle:");
        if(scanf("%lf",&angle)==EOF)break;
        if(infinity_check(angle))printf("res=infinity\n");///tanx needs special treatment to determine infinity
        else printf("res=%lf\n",tan(angle));
        printf("\n");
    }
}
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

double tan(double x)
{
    ///tanx=sinx/cosx
    return sin(x)/cos(x);
}
int infinity_check(double x)
{
    int y=x;
    if(y==x)
    {

        if(y%90==0)
            if((y/90)%2!=0)return 1;
    }
    return 0;
}

