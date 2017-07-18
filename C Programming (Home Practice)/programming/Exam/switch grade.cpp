#include<stdio.h>
int main()
{
    int score,grade;
    scanf("%d",&score);
    grade = score/10;
    switch(grade)
    {
    case 10:
    case 9:
        printf("\nYour grade is A.");
        break;
    case 8:
        printf("\nyour grade is B.");
        break;
        default:
        printf("Your grade is F.");
        break;
    }
}
