#include<stdio.h>
#include<conio.h>
main()
{
    int mark,r;
    r=mark/10;
    printf("Enter mark : ");
    scanf("%d",&mark);
    switch(r)
    {
    case 10:
        printf("A grade.");
        break;
    case 9:
        printf("A grade.");
        break;
    case 8:
        printf("A grade.");
        break;
    case 7:
        printf("B grade.");
        break;
    case 6:
        printf("C grade.");
        break;
    default:
        printf("F grade");
    }
    getch();
}
