#include<stdio.h>
int main()
{
    int c;
    char ch,s[1000];
    gets(s);
    for(c=0; s[c]!=NULL; c++)
    {
        ch = s[c];
        if(ch>='A' && ch<='Z')
            s[c] = s[c]+32;
        else if(ch>='a' && ch<='z')
            s[c] = s[c] - 32;

    }
    puts(s);
}
