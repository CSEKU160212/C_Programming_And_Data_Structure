#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
            printf("%d\n",i);
    }
    return 0;
}
