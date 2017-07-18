#include<stdio.h>
int ana(char a[],char b[])
{
    int first[26] = {0},second[26]={0},c=0;
    while(a[c]!=NULL)
    {
        first[a[c]-'a']++;
        c++;
    }
    c = 0;
    while(b[c]!=NULL)
    {
        second[b[c]-'a']++;
        c++;
    }
    for(c=0;c<26;c++)
    {
        if(first[c]!=second[c])
        {
            return 0;
        }
        else
            return 1;
    }
}
int main()
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    int flag = ana(a,b);
    if(flag==1)
        printf("anagram\n");
    else
    {
        printf("not anagram");
    }

}
