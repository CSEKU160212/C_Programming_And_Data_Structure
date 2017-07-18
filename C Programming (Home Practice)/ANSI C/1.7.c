#include<stdio.h>

int add(int x, int y)
{
    int sume;
    sume=x+y;
    return sume;
}
int sub(int x, int y)
{
    int subs;
    subs = x-y;
    return subs;
}

int main()
{
    int a, b, sum, subst;
    scanf("%d%d", &a, &b);
    sum= add(a,b);
    subst= sub(a,b);
    printf("%d + %d = %d\n%d - %d = %d", a, b, sum, a, b, subst);
    return 0;
}
