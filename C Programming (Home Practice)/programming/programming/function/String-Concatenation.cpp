///String Concatenation
#include <stdio.h>

char* strcat(char str1[], char str2[])
{
    char str[1000];
    int len1, len2, i;
    for(len1 = 0; str1[len1] != NULL; len1++);
    for(len2 = 0; str2[len2] != NULL; len2++);

    for(i = 0; i<len1; i++)
        str[i] = str1[i];
    for(i = 0; i<=len2; i++)
        str[i+len1] = str2[i];

    return str;
}

int main()
{
    char str1[1000], str2[1000];
    gets(str1);
    gets(str2);
    puts(strcat(str1, str2));
}
