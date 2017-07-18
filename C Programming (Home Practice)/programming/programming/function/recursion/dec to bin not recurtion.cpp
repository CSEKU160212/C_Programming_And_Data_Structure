#include<stdio.h>

long toBinary(int);

int main(){

    long binaryNo;
    int decimalNo;

    printf("Enter any decimal number: ");
    scanf("%d",&decimalNo);

    binaryNo = toBinary(decimalNo);
    printf("Binary value is: %ld",binaryNo);

    return 0;
}

long toBinary(int decimalNo){

    long binaryNo,remainder,factor = 1;

    while(decimalNo != 0){
         remainder = decimalNo % 2;
         binaryNo = binaryNo + remainder * factor;
         factor = factor * 10;
         decimalNo = decimalNo / 2;
    }

    return binaryNo;
}

