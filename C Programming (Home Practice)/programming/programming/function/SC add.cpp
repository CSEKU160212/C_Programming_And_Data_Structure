#include<stdio.h>
int add(int a,int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        printf("%d\n",add(a,b));
    }
}
