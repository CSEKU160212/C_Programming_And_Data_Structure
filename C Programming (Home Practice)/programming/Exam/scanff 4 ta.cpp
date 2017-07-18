#include<stdio.h>
void scan(int &n)
{
    scanf("%d",&n);
}
int main()
{
    int a,b,c,d;
    scan(a);
    scan(b);
    scan(c);
    scan(d);
    printf("%d %d %d %d",a,b,c,d);
}
