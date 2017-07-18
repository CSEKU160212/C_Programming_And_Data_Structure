#include<stdio.h>

int sqr_num(int n)
{
    return n*n;
}
int cube_num(int n)
{
    return sqr_num(n)*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",sqr_num(n));
    printf("%d\n",cube_num(n));
    main();
}
