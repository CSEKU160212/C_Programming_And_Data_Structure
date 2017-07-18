#include<stdio.h>
int main()
{
    int i,j,k=1,n;
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k%2==1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            k++;
        }
        printf("\n");
    }
}
