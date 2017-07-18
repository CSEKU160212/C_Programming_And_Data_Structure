#include<stdio.h>
#include<conio.h>
main()
{
    int mark,r;
    printf("Enter mark : ");
    scanf("%d",&mark);
    r=mark/10;
    if(r==10 || r==9 || r==8)
        printf("A grade.");
    else if(r==7)
        printf("B grade.");
    else if(r==6)
        printf("C grade.");
    else
        printf("F grade");
    getch();
}
