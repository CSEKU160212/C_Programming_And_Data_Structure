#include<stdio.h>
#include<conio.h>
int main(void)

{
    int num1, num2, num3, x, y;
    printf("Please enter three integer numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    x=(num1>num2)?num1:num2;
    y=(x>num3)?x:num3;
    printf("The maximum number is : %d",y);
    getch();
}
