#include<stdio.h>
int main()
{
    double R, S;
    scanf("%lf", &R);
    S = (4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n", S);
    return 0;
}
