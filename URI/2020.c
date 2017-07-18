#include<stdio.h>
int main()
{
    double N, n;
    int temp, a;
        scanf("%lf", &N);
    printf("NOTAS:\n");
    temp=(int)N;
    printf("%d nota(s) de R$ 100.00\n", temp/100);
    temp=temp%100;
    printf("%d nota(s) de R$ 50.00\n", temp/50);
    temp=temp%50;
    printf("%d nota(s) de R$ 20.00\n", temp/20);
    temp=temp%20;
    printf("%d nota(s) de R$ 10.00\n", temp/10);
    temp=temp%10;
    printf("%d nota(s) de R$ 5.00\n", temp/5);
    temp=temp%5;
    printf("%d nota(s) de R$ 2.00\n", temp/2);
    temp=temp%2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", temp/1);
    n=N*100;
    a=(int)n;
    temp=a%100;
    printf("%d moeda(s) de R$ 0.50\n", temp/50);
    temp=temp%50;
    printf("%d moeda(s) de R$ 0.25\n", temp/25);
    temp=temp%25;
    printf("%d moeda(s) de R$ 0.10\n", temp/10);
    temp=temp%10;
    printf("%d moeda(s) de R$ 0.05\n", temp/5);
    temp=temp%5;
    printf("%d moeda(s) de R$ 0.01\n", temp/1);
    return 0;

}
