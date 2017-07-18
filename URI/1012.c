#include<stdio.h>
int main()
{
    double A, B, C, Art, Ac, Tr, sq, rt;
    scanf("%lf%lf%lf", &A, &B, &C);
    Art=0.5*A*C;
    Ac=3.14159*C*C;
    Tr=0.5*(A+B)*C;
    sq=B*B;
    rt=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", Art, Ac, Tr, sq, rt);
    return 0;
}
