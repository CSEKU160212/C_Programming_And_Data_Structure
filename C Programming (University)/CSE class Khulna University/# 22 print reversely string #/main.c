#include<stdio.h>

int main()

{
    int i; /// ekhane A[10] int type a nileo kono problem hoena kano??
    char A[10];
    for(i=0;i<10;i++)
    {
        scanf("%c",&A[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%c",A[i]);
    }
    return 0;
}
