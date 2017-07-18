#include<stdio.h>
int f(int x)
{
    scanf("%d", &x);
    return x;
}

int e(int y)
{
    printf("%d\n", y);
    return y;
}

int main()
{
    int a, b, c, d, a2, b2, c2, d2;
    a=f(a);
    b=f(b);
    c=f(c);
    d=f(d);
    a2=e(a);
    b2=e(b);
    c2=e(c);
    d2=e(d);

}
