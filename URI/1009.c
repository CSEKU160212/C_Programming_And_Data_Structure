#include<stdio.h>
int main()
{
    char name[10];
    double fs, sls, total;
    scanf("%s%lf%lf", name, &fs, &sls);
    total=fs+((sls*15)/100);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}



