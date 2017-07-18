#include<stdio.h>
int main()
{
    int code, a1, a2;
    double p1, p2, total;
    scanf("%d%d%lf", &code, &a1, &p1);
    scanf("%d%d%lf", &code, &a2, &p2);
    total=p1*a1+p2*a2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
