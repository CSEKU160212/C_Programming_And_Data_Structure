#include <stdio.h>
int main()
{
    char str[30];
    int i,l=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
        l = l+1;
    printf("%s length is %d\n",str,l);

}
