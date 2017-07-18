#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, m, m2, m3;
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    m=(num1>num2)? num1:num2;
    m2=(m>num3)? m:num3;
    m3=(m2>num4)? m2:num4;
    printf("Maximum is %d", m3);
    return 0;
}
