#include<stdio.h>
int main()
{
    int mark, r;
    printf("Enter The obtaining Mark: ");
    scanf("%d", &mark);
    r = mark / 10;

    switch(r){
    case 10:
    case 9:
    case 8:
        printf("You Got 'A+'");
        break;
    case 7:
        printf("You Got 'A'");
        break;
    case 6:
        printf("You Got 'A-'");
        break;
    case 5:
        printf("You Got 'B'");
        break;
    case 4:
        printf("You Got 'C'");
        break;
    case 3:
        printf("You Got 'D'");
        break;
    default:
        printf("Fail");
    }
    return 0;
}
