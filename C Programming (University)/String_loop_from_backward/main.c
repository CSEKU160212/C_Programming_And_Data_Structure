#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[5];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%c", &A[i]);
    }
   for(i=4; i>=0; i--){
    printf("%c", A[i]);
   }
    return 0;
}
