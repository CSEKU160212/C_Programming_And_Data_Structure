#include<stdio.h>
int main()
{
    char s[20],c[20],d[20];
    printf("Enter the String\n");
    scanf("%s%s%s",s,d,c);
    printf("(a)%s %.1s. %s\n",s,d,c);
    printf("(b)%.1s. %.1s. %s\n",s,d,c);
    printf("(c)%s %.1s. %s\n",c,d,s);
}
