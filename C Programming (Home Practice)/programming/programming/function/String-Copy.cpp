///String copy
#include <stdio.h>

void strcpy(char str1[], char str2[])
{
    for(int i = 0; str2[i-1] != NULL; i++)
        str1[i] = str2[i];
}

int main()
{
    char str1[1000], str2[1000];
    gets(str2);
    strcpy(str1, str2);
    puts(str1);
}
