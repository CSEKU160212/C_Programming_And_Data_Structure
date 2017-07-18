#include<stdio.h>
int main()
{
    char s[10],d[10];
    printf("Enter the String\n");
    scanf("%s%s",s,d);
    printf("(a)%s %s\n",s,d);
    printf("(b)%s\n   %s\n",s,d);
    printf("(c)%.1s. %.1s.\n",s,d);
}

