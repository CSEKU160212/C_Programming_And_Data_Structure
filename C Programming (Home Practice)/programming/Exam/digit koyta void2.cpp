#include<stdio.h>
void digit(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    digit(n);
}
