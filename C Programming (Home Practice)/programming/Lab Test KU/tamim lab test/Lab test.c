#include <stdio.h>

int main()
{
    long long unsigned a,b,x;

    scanf("%lld%lld",&a,&b);
    if(a>b)
        {
            x=a-b;
            printf("%lld",x);
        }
        else
        {
            x=b-a;
           printf("%lld",x);
        }
    return 0;

}
