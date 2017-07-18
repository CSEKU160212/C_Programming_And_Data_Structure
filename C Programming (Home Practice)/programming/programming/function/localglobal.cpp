#include<stdio.h>
void f(int x)
{
    x = x + 2;
    printf("%d\n",x);
}
int main()
{
    int x = 3;
    printf("%d\n",x);
    f(x);
    printf("%d\n",x);
}
