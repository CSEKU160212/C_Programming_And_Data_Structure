#include<stdio.h>
int main()
{
    int i,j,n,k,l,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            printf("*");
        }
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        printf("\n");
        for(l=1;l<=i-1;l++)
        {
            printf(" ");
        }
       // for(m=1;m<=n+1-i;m++)
      //  {
        //    printf("*");
       //}
        //printf("\n");

    }
}
