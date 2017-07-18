#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000

char * multiply(char [MAX],char[MAX]);
int main(){
    char a[MAX];
    char b[MAX];
    char *c;
    int la,lb;
    int i;
    printf("Enter the first number : ");
    scanf("%s",a);
    printf("Enter the second number : ");
    scanf("%s",b);
    printf("Multiplication of two numbers : ");
    c = multiply(a,b);
    printf("%s",c);
    return 0;
}

