#include<stdio.h>

int r,s;
int findsum(int n)
{
    if(n)
    {
        r=n%10;
        s=s+r;
        findsum(n/10);
    }
    else
        return s;
}
int main()
{
    int num,x;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    x=findsum(num);
    printf("Sum of the digits of %d is: %d",num,x);
    return 0;
}


