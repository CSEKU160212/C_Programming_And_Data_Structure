#include<stdio.h>
int main()
{
    int n100, n50, n20, n10, n5, n2, n1, temp, N;
    scanf("%d", &N);
    printf("%d\n", N);
    temp=N;
    printf("%d nota(s) de R$ 100,00\n", temp/100);
    temp=temp%100;
    printf("%d nota(s) de R$ 50,00\n", temp/50);
    temp=temp%50;
    printf("%d nota(s) de R$ 20,00\n", temp/20);
    temp=temp%20;
    printf("%d nota(s) de R$ 10,00\n", temp/10);
    temp=temp%10;
    printf("%d nota(s) de R$ 5,00\n", temp/5);
    temp=temp%5;
    printf("%d nota(s) de R$ 2,00\n", temp/2);
    temp=temp%2;
    printf("%d nota(s) de R$ 1,00\n", temp/1);
    return 0;
}
