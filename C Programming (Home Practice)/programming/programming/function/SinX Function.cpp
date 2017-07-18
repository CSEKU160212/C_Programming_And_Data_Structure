#include <stdio.h>
#define pi 3.14159265358979323846

float sin(float x)    ///return type should be float as it will return a floating point number
{
    float res = 0, pow, fac;
    int i,j;

    for(i = 1; ; i+=2)
    {
        pow = fac = 1;  ///the initial value of pow & fac will change in every iteration of loop. thats why it needs to reset to 1

        for( j = 1; j<=i; j++)
        {
            pow *= x;
            fac *= j;
        }

        if(pow/fac == 0) break; ///when the ith number i.e. pow/fac will be zero, res will have a constant value and the loop will end up
        if(i%4 == 1)
            res += (pow/fac);
        else
            res -= (pow/fac);
    }

    return res;
}

int main()
{
    float d;
    scanf("%f",&d);     ///takes the value in degree unit
    int a = d/360;
    d = d - (a*360);    ///works as d%360

    float x = d*pi/180; ///remember, the function sin() is written as it takes radian value. so we need to change it in main.
    ///if we input degree value, this conversion should be done inside sin() function.

    printf("%f", sin(x));  ///it will work as x = x, where first x is the parameter of sin() function and second one declared inside main
}
