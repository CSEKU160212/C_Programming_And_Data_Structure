#include<stdio.h>
int main() 
{
    int a, b, maximum;
    scanf("%d%d", &a, &b);
    maximum = (a>b)? a:b;

    printf("%d", maximum);
    return 0;
}
