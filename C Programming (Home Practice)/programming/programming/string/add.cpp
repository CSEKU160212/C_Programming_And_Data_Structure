#include <stdio.h>

int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i,j;
    for(i=0;;i++)
    {
        if(a[i]=='\0')
            break;
    }
    for(i=i,j=0; b[j]!='\0'; i++,j++)
    {
        a[i] = b[j];
    }
    a[i] = '\0';
    puts(a);
    return 0;
}
