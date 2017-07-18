#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    gets(str);
    printf("%d", strlen(str));
}
