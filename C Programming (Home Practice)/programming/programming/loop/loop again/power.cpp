#include <stdio.h>
int main()
{
    int a,b,r,i;
    printf("Enter two numbers\n");
    r=1;
    scanf("%d %d", &a,&b);
    for(i=1;i<=b;i++)
    {
        r=r*a;
    }
    printf("%d", r);


}
