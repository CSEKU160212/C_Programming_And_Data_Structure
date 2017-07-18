#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10, *p, A[10], i;
    p=A;
    for(i=0; i<10; i++)
    {
        printf("%x\n", p+i);
    }
    printf("%x", p);
    return 0;
}
