#include<stdio.h>
int main()
{
    int a,b,t,gcd;
    scanf("%d %d",&a,&b);
    if(a==0)
        gcd = b;
    else if(b==0)
        gcd = a;
    else
    {
        while(b!=0)
        {
            t = b;
            b = a%b;
            a = t;
        }
        gcd  = a;
    }
    printf("%d",gcd);
}
