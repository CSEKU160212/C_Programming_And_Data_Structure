#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, A[10];
    p=&A;
    printf("%x\n%u\n%x\n%x", A, p, A[0], A[9]);
    return 0;
}
