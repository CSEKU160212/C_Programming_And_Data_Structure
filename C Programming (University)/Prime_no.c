#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, a, b, flag;
    scanf("%d%d", &a, &b);

    for(i=a; i<=b; i++)
    {
    flag=0;
        for(n=2; n<=i/2; n++){
            if (i%n==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0 && i!=0 &&i!=1)
            {
            printf("%d\t", i);

            }
    }

    return 0;
}


