#include<stdio.h>
#include<conio.h>
main()
{
    int mark;
    printf("Enter mark : ");
    scanf("%d",&mark);
    switch(mark/10)
    {
        default :
        printf("F grade");
        break;//default age likhsi cause eta babohar hober probability beshi....
    case 10:// evabe lekhai valo,, """case '10' :""" evabe likhle problem hoe ........
    case 9://9 and : er majhe space na dileo hoe.....
    case 8:
        printf("A grade");
        break;
    case 7:
        printf("B grade");
        break;
    case 6:
        printf("C grade");//last case er por break dea lage na.....
    }
       {
           printf("\n");
       }
    getch();
}
