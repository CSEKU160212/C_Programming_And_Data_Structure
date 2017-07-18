//String Catanation//

#include<stdio.h>

void strcat(char a[],char b[])
{
    int i,j;
    for(i=0;;i++)
    {
        if(a[i]=='\0')
            break;
    }
    for(j=0; b[j]!='\0'; i++,j++)
    {
        a[i] = b[j];
    }
    a[i] = '\0';
}
int main()
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    strcat(a,b);
    puts(a);

}

