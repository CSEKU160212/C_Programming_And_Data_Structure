#include<stdio.h>
int main()
{
    int num, div, mul, min;
    scanf("%d", &num);
    div= num/2;
    mul= div * 2;
    min= num-mul;
    if(min==0){
        printf("The number is Even");
    }
    else{
            printf("The number is Odd");
    }
    return 0;

}

