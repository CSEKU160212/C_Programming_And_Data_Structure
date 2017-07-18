#include<stdio.h>
int f(int x);

int main()
{
    int i;
    scanf("%d",&i);
    printf("%d\n",f(i));

}
int f(int x)
{
    return (x*x*x - 2*x*x + 8*x - 3);
}
