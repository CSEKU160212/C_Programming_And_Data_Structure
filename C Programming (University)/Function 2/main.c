#include <stdio.h>
#include <stdlib.h>

int add(int x, int y)
{
    int sum;
    sum = x+y;
    return sum;
    return 0;
}
int main()
{
    int s;
    s=add(10, 30);
    printf("Sum=%d", s);
    return 0;
}
