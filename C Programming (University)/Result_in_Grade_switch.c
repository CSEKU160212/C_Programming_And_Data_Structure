#include<stdio.h>
int main()
{
    int r, mark;
    printf("Enter the Mark: ");
    scanf("%d", &mark);

    r=mark/10;

    switch(r)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;
    case 3:
        printf("D");
        break;

    default:
        printf("F");

    }
    return 0;

}
