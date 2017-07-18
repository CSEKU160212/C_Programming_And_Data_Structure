#include<stdio.h>
int cube(int x)
{
    return (x*x*x);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",cube(n));
}
