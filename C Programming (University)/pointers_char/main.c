#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p, A[10];
    int i;
    p=A;
    for(i=0; i<10; i++)
    {
        printf("%x\n", p+i);
    }
    printf("%x", p);
    return 0;
}
