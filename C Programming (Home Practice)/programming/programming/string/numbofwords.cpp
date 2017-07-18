#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;


int main()
{
    char s[200];
    int count = 0, i;
    gets(s);
    for (i = 0;s[i]!=NULL;i++)
    {
        if (s[i] == ' ')
            count++;
    }
    printf("%d",count+1);
}
