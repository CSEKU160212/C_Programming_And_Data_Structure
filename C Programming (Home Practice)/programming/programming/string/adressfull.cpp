#include<stdio.h>
int main()
{
    int i;
    char name[50];
    char fa_name[50];
    char mo_name[50];
    char add[100];
    gets(name);
    gets(fa_name);
    gets(mo_name);
    gets(add);
     for(i=0;;i++)
    {
        if(fa_name[i]=='\0')
            break;
    }
    printf("\nLength of string is %d\n",i);

}
