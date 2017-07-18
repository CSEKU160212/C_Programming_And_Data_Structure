#include<stdio.h>
int main()
{
    int m,n,c,d,mat[10][10],trans[10][10];
    scanf("%d %d",&m,&n);
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&mat[c][d]);
        }
    }

    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            trans[d][c] = mat[c][d];
        }
    }
    for(c=0;c<n;c++)
    {
        for(d=0;d<m;d++)
        {
            printf("%d ",trans[c][d]);
        }
        printf("\n");
    }
}
