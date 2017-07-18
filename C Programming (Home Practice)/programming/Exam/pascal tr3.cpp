#include<stdio.h>
int main()
{
    int i,j,k,n=1,row,sp;
    scanf("%d",&row);
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(sp=1;sp<=row-i;sp++) printf("  ");
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            {
                n = 1;
            }
            else
            {
                n = n*(i-j+1)/j;
            }
            printf("%4d",n);
        }
        printf("\n");

    }
}
