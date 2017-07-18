#include<stdio.h>
int main()
{
    int m=(int)4.556;
    int x, y, n=3, max;
    x=++m;
    y=n++;
        max=(x>y)?20:30;
        printf("%d", max);
    return 0;
}
