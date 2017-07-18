#include<stdio.h>
int main() //this is a mendatory function ic c
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c){
    printf("a is bigger\n");
    }
    else if(b>a && b>c){
        printf("b is bigger");
    }
    else{
        printf("c is bigger");
    }
    return 0;
}
