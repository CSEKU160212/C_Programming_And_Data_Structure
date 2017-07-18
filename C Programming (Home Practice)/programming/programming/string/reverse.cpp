#include <stdio.h>
int main()
{
    char str[30]="BANGLADESH",str_new[30];
    int i,j;
    for(i=9,j=0;i>=0;i--)
    {
        str_new[j]=str[i];
        j++;
    }
    str_new[j]='\0';
    printf("%s",str_new);

}
