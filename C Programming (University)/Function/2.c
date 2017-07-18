#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);
int main()
{
    int sum;
    sum=add(10,30);
    printf("Sum=%d", sum);
    return 0;

}
int add(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
