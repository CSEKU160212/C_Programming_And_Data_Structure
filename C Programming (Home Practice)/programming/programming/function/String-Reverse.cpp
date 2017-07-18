#include <stdio.h>

char* strrev(char str[])
{
    int len, i;
    char rev[1000];
    for(len = 0; str[len] != NULL; len++);
    rev[len] = NULL;

    for(i = 0; i<len; i++)
    {
        rev[i] = str[len-1-i];
    }

    return rev;
}

int main()
{
    char str[1000];
    gets(str);
    puts(strrev(str));
}
