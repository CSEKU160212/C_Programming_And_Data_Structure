#include<stdio.h>
#include<math.h>
int main()
{
    double Area, s, a, b, c;

    while(scanf("%lf%lf%lf", &a, &b, &c)==3)
    {
        s=(a+b+c)/2.0;
        Area=(4/3.0)*sqrt(s*(s-a)*(s-b)*(s-c));

        if(!(Area>0))
        {
            Area=-1.0;
        }
        printf("%.3lf\n", Area);
    }
    return 0;
}
