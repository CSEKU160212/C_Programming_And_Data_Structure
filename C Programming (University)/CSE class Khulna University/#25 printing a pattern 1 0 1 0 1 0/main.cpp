#include<stdio.h>

int main()
{
    int i,j,row,p;
    scanf("%d",&row);
    for(i=1;i<row+1;i++)
    {
        for(j=1;j<=i;j++)
        {
            p=j%2;
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}
