#include<stdio.h>
int main()
{
    int i, T;
    double C, d, F, c;
    while(scanf("%d", &T)==1)
    {
        for(i=1; i<=T; i++)
        {
            scanf("%lf%lf", &C, &d);
            F=(9*C)/5+32+d;
            c=((F-32)*5)/9;
            printf("Case %d: %.2lf\n", i, c);
        }
    }
    return 0;
}
