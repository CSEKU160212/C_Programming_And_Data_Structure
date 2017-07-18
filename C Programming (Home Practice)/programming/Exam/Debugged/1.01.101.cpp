#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(k%2==1) printf("1");
            else printf("0");
            k++;
        }
        printf("\n");
    }
}
