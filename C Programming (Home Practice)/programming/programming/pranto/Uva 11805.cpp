#include<stdio.h>
int main()
{
    int i,j,n,k,p,r;
    scanf("%d",&i);
    for(j=1; j<=i; j++)
    {
        scanf("%d %d %d",&n,&k,&p);
        r=k+p;
        for(r; r>n;)
        {
            r=r-n;
        }
        printf("Case %d: %d\n",j,r);
    }
}
