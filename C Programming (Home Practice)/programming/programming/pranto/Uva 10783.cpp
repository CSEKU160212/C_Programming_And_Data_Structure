#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&c);

    for(i=1;i<=c;i++)
        {
            scanf("%d %d",&a,&b);

            d=0;
            if(a%2==0)
            a=a+1;

            for(j=a;j<=b;j=j+2)
                d+=j;

            printf("Case %d: %d\n",i,d);
        }

    return 0;
}
