#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10, y=20, *p1, *p2;
    p1=&x;
    p2=&y;
    *p1=*p2;
    printf("%d %d", x, y);
    return 0;
}
