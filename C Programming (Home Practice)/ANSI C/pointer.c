#include<stdio.h>
int main()
{
    int x= {10, 20, 30, 40}, a, b, c;
    int *p;
    p=&x;
    a=*p++;
    b=*++p;
    c=++*p;
    printf("%d %d %d", a, b, c);
}
