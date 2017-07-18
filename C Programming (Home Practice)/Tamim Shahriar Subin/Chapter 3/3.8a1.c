#include<stdio.h>
int main()
{
    int num, div, mul;
    scanf("%d", &num);
    div= num/2;
    mul= div * 2;
    if(mul==num){
        printf("The number is Even");
    }
    else{
            printf("The number is Odd");
    }
    return 0;

}
