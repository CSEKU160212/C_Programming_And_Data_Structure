#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,n,d;
    scanf("%d",&n);
    d=n;
    for(a=1;a<=n;a++)
    {
        for(b=1;b<d;b++)
        {
            printf(" ");
        }
        d--;
        for(b=1;b<=a*2-1;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(a=n-1;a>=1;a--)
    {
        for(b=d+1;b>0;b--)
        {
            printf(" ");
        }
        d++;
        for(b=a*2-1;b>=1;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    getch ();
}
