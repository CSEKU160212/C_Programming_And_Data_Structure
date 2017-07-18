#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[5];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%c",&A[i]);
    }
    printf("Input string: %s", A);
    return 0;
}
