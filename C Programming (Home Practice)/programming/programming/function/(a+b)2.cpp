#include<stdio.h>
int square(int a,int b)
{
    return (a*a+2*a*b+b*b);
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==1)
    {
        printf("%d",square(a,b));
    }
}
