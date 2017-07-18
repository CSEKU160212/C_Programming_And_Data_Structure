#include<stdio.h>
int main()
{
    int m,n,c,d,p,q,k,sum=0,first[10][10],second[10][10],mul[10][10];
    scanf("%d %d",&m,&n);
    for(c=0; c<m; c++)
        for(d=0; d<n; d++)
            scanf("%d",&first[c][d]);
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("cant be multipled\n");
    }
    else
    {
        for(c=0; c<p; c++)
            for(d=0; d<q; d++)
                scanf("%d",&second[c][d]);

        for(c=0; c<m; c++)
        {
            for(d=0; d<q; d++)
            {
                for(k=0; k<p; k++)
                {
                    sum = sum+first[c][k]*second[k][d];
                }
                mul[c][d] = sum;
                sum = 0;
            }
        }


        for(c=0; c<m; c++)
        {
            for(d=0; d<q; d++)
            {
                printf("%d\t",mul[c][d]);
            }
            printf("\n");
        }

    }
}
