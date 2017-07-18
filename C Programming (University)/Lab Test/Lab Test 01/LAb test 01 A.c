#include<stdio.h>
int main()
{
    int a, b, c;
    while(1)
    {
        scanf("%d%d", &a, &b);
        if(a>b)
        {
            c=a-b;
            printf("%d\n", c);
        }
        else
        {
            c=b-a;
            printf("%d\n", c);
        }
    }
    return 0;
}
