#include<stdio.h>
int main()
{
    int i,j,n=1,rows,sp;
    scanf("%d",&rows);
    printf("\n\n");
    for(i=0; i<rows; i++)
    {
        for(sp=1; sp<=rows-i; sp++) printf("  ");

        for(j=0; j<=i; j++)
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
