#include<stdio.h>
int strlen(char str[])
{
    int i;
    for(i=0;;i++)
    {
        if(str[i]=='\0')
            break;
    }
    return i;
}

int main()
{
    char str[1000];
    gets(str);
    strlen(str);
    printf("%s length is %d\n",str,strlen(str));
}
