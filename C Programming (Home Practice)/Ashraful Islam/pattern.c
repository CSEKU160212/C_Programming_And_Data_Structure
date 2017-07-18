#include<stdio.h>
int main()
{
    int row, col, i, j, k;
    scanf("%d", &row);
    col=row-1;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }


        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        col--;

        printf("\n");

    }
}
