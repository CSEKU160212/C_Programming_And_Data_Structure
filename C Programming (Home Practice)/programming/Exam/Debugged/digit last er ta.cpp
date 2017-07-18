#include<stdio.h>
#include<conio.h>
int main()
{
    int a,e;
    //clrscr();
   // printf(“Enter the value of a\n”);
    scanf("%d",&a);
    e=a%100;
    if(a>100)
        printf("%d\n%d\n",a,e);
    //getch();
}
