#include <stdio.h>

int main()
{
    char string[20];
    int n, count=0;
    printf("Enter the no of characters present in an array \n ");
    scanf("%d", &n);
    printf(" Enter the string of %d characters \n" , n);
    gets(string);
    while (count < n)
    {
        printf(" %c = %d\n", string[count], string[count] );
        ++ count ;
    }
   /* for(count=0;count<n;count++)
    {
        printf(" %c = %d\n", string[count], string[count] );
    }*/

}
