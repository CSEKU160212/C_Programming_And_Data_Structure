#include <stdio.h>
#include <math.h>

int main()
{
    int n, x1,b,mul,k, i, j;
    float x, sign, cosx, fact;

    printf("Enter the number of the terms in a series\n");
    scanf("%d", &n);
    printf("Enter the value of x(in degrees)\n");
    scanf("%f", &x);
    x1 = x;
	/*  Degrees to radians */
    x = x * (3.142 / 180.0);
    cosx = 1;
    sign = -1;
    for (i = 2; i <= n; i = i + 2)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        for(k=1;k<=i;k++) mul*=b;
        cosx = cosx + (mul / fact) * sign;
        sign = sign * (-1);
    }
    printf("Sum of the cosine series = %7.2f\n", cosx);
    printf("The value of cos(%d) using library function = %f\n", x1,
    cos(x));
}
