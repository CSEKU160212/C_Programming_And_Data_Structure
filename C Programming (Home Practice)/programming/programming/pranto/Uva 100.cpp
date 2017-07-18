#include<stdio.h>
int main()
{
    int i,j,k,a,b,step,total;
    while(scanf("%d %d",&a,&b)==2)
    {
        printf("%d %d ",a,b);
        if(a>b)
        {
            k=b;
            b=a;
            a=k;
        }
        total=0;
        for(i=a; i<=b; i++)
        {
            j=i;
            for(step=1; j>1; step++)
            {

                if(j%2==0)
                {
                    j=j/2;
                }
                else
                {
                    j=(3*j)+1;
                }

            }
            if(step>=total)
            {
                total=step;
            }
        }
        printf("%d\n",total);
    }
}
