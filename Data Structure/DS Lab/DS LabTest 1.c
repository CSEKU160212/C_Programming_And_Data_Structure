#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,odd=0,even=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            if(a[i][j]%2==0)
            {
                a[i][j]=0;
                even++;
            }
            else
            {
                a[i][j]=1;
                odd++;
            }
        }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ",a[r][j]);
        printf("\n");
    }
    printf("\n");
    printf("odd=%d\neven=%d\n",odd,even);
    return 0;
}
