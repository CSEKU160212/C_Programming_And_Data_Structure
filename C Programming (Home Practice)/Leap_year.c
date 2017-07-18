#include<stdio.h>
int main()
{
    int y;
L:
    printf("Enter the year: ");
    scanf("%d", &y);
    if(y%400==0  || y%4==0 && y%100!=0)
    {
        printf("Leap year");
    }

    else
    {
        printf("Not leap year");
    }
    printf("\n\n");
    goto L;
}
