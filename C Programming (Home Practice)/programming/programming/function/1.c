#include <stdio.h>
double add(double num1,double num2)
{
    double sum=num1+num2;
    return sum;
}
int main ()
{
    double a=2.9,b=3.5,c;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}
