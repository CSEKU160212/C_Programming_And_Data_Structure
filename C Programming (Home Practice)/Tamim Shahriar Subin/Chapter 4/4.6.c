#include<stdio.h>
int main()
{
    int n=7, i;
    for(i=1; i<=10; i=i+1){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}