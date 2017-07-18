#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, A[10]={1,2,3,4,5,6,7,8,9,0};
    int i;
    p=A;
    for(i=0; i<10; i++)
    {
        printf("%x\n%d\n", p+i, *(p+i));
    }
    return 0;
}
