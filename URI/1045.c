#include<stdio.h>
int main()
{
    double n1, n2, n3, A, B, C;
    scanf("%lf%lf%lf", &n1, &n2, &n3);
    double min1 = n1<n2 ? n1:n2;
    double min = min1<n3 ? min1:n3;
    double max1 = n1>n2 ? n1:n2;
    double max = max1>n3 ? max1:n3;
    double mid =(n1+n2+n3)-(min + max);
    n1=max;
    n2=mid;
    n3=min1;
    if (n1 >= n2 + n3)
        printf("NAO FORMA TRIANGULO\n");
    else if (n1 = n2 + n3)
        printf("TRIANGULO RETANGULO\n");
    else if (n1*n1 > n2*n2 + n3*n3)
        printf("TRIANGULO OBTUSANGULO\n");
    else if (n1*n2 < n2*n2 + n3*n3)
            printf("TRIANGULO ACUTANGULO\n");
    if(n1==n2 && n2==n3)
            printf("TRIANGULO EQUILATERO\n");
    else if(n1==n2 || n2==n3)
            printf("TRIANGULO ISOSCELES\n");
    return 0;
        }
