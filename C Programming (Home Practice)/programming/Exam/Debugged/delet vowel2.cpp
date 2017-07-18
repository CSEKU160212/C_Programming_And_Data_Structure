#include<stdio.h>
#include<string.h>
int check_vowel(char);
int main()
{
    char s[100],t[100];
    gets(s);
    int i,j=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(check_vowel(s[i])== 0)
        {
            t[j] = s[i];
            j++;
        }
    }
    t[j] = NULL;
    strcpy(s,t);
    puts(s);
}
