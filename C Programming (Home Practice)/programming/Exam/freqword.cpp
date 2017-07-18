#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int i,count = 0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
            count++;
    }
    printf("%d",count+1);
}
