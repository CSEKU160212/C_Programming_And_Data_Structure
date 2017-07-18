/*C program for character triangle*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch,r,c;
    printf("Enter last pyramid character : ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        ch=ch-32;
    for(r='A'; r<=ch; r++)
    {
        for(c='A'; c<=r; c++)
        {
            printf("%c",r);
        }
        printf("\n");
    }
    return 0;
}
