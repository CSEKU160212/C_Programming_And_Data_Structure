#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n;
    printf("Enter m : ");
    scanf("%d", &m);
    printf("enter n : ");
    scanf("%d", &n);
    l: if(m>=0 && m<=n)
       {

        printf("%d\t",m);
        m++;
    goto l;
        }
    getch();
}
