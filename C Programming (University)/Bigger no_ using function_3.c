#include<stdio.h>
int big(int a,int b,int c);
int main()
{
    int x, y, z,maxx;
    scanf("%d%d%d", &x, &y, &z);
    maxx=big(x, y,z);
    printf("%d", maxx);
}

int big(int a,int b,int c)
{
    int max,max2;
    max=(a>b)?a:b;
    max2=(max>c)?max:c;
    return max2;
}
