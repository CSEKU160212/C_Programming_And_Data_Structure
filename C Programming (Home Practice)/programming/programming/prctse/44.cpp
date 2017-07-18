#include <stdio.h>
int main()

{
    int x,y,temp;
    printf("Enter tha value of x and y: \n");
    scanf("%d %d", &x,&y);

    printf("Before swapping\nx = %d\ny = %d\n",x,y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping\nx = %d\ny = %d",x,y);
    return 0;
}
