#include<stdio.h>

int main()
{
    int i,j,row,p;
    scanf("%d",&row);
    for(i=1;i<row+1;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
                p=j%2;
                printf("%d",p);
            }
        }
        else
        {
            for(j=0;j<i;j++)
            {
                p=j%2;
                printf("%d",p);
            }
        }
        printf("\n");
    }
    return 0;
}
