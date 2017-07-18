#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char a[5];
    for(i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
    }
    printf("input string ; %s",a);
    return 0;
}
