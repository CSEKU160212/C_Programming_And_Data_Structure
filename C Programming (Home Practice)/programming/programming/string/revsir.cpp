#include <stdio.h>
int main()
{
    char str[30],str_new[30];
    gets(str);
    int i,j,l;
    for(i=0;; i++)
    {
        if(str[i]=='\0')
            break;
    }

    for(i=i,j=0;str_new[j]!=NULL; i--,j++)
    {
        str_new[j]=str[i];
    }
    str_new[j]='\0';
    puts(str_new);


}


