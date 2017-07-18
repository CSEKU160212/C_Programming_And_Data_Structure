#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n<0){
        printf("The number is negetive");
    }
    else if(n>0){
        printf("The number is possitive");
    }
    else if(n==0){
        printf("The number is zero");
    }
    return 0;
}
