#include <stdio.h>
int main()
{
    int k, c, n,j,i;
    for(j=0; j<10; j++)
    {
        scanf("%d", &n);
        {
            if(n==0)
            {
                break;
            }
            c =0;

            for(i=0; ; i++)
            {
                c+=n/3;
                n=(n/3)+(n%3);

                if(n==2)
                {
                    n+=1;
                }
                if(n==1)
                {
                    break;
                }
            }
            printf("%d\n", c);
        }
    }
}
