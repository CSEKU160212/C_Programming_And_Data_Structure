#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[30];
    scanf("%[^\n]", &A);
    printf("Input statement: %s", A);
    return 0;
}
