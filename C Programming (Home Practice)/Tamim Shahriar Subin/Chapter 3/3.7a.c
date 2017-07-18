#include<stdio.h>
int main()
{
    int number, A;
    printf("Enter the number: ");
    scanf("%d", &number);
    A = number % 2;
    if(A==0){
        printf("This Number is Even");
    }
    else{
        printf("This Number is odd");
    }
    return 0;
}
