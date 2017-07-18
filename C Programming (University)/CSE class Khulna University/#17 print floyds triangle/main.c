#include <stdio.h>
#include <conio.h>

int main()
{
    int row,n,value=1,i,j;
    //printf("Enter row number : ");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(i=0;i<=row;i++)
        {
            printf("%d ",value);
            value++;
        }
        printf("\n");
    }
    getch ();
}
