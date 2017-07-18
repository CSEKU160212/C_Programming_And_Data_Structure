#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[10];
    int i, len=0;
    scanf("%s", &A);
    for(i=0; A[i]!='\0'; i++)
        len++;
   // printf("%d\n", len);
    for(i=len-1; i>=0; i--)
        printf("%c", A[i]);

    return 0;
}
