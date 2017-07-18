#include<stdio.h>

int f(int x,int y)
{
    return (x*x + y*y*y + 10);
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d",f(n1,n2));

}
