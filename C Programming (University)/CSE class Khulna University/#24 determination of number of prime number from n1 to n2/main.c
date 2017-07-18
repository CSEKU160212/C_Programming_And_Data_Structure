#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,flag,n,nop=0;
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        if(n<=1)
            continue;
        flag=0;
        for(c=2;c<=(n/2);c++)
        {
            d=n%c;
            if(d==0)
            {
                flag=1;
            }
        }
        if(n<=1)
            {
                flag=1;
            }
        if(flag==0)
        {
            nop=nop+1;
        }
    }
    printf("%d is the total number of prime.\n",nop);
    return 0;
}
