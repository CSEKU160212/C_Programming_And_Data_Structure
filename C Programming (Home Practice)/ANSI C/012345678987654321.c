#include<stdio.h>
int main()
{
    char A[40];
    int i, l=0;
    for(i=0; i<=9; i++)
    {
        A[i]=i;
        printf("%d", i);
        l++;
    }
     for(i=l-2; i>=0; i--)
    {
        A[i]=i;
        printf("%d", i);
    }
    return 0;
}

