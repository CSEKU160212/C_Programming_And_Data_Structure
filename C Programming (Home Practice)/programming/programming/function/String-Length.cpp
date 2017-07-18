///String Length
#include <stdio.h>

int strlen(char str[])
{
    int len;
    for(len = 0; str[len] != NULL; len++);
    return len;
}

int main()
{
    char str[1000];
    gets(str);
    int len = strlen(str);
    printf("Length of %s is %d.\n", str, len);
}
