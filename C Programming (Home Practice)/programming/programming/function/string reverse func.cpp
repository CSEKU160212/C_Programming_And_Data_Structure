//String Reverse//

#include<stdio.h>

void strrev(char str[],char str_new[])
{
    int i,j,l;
    for(l=0; str[l]!='\0'; l++)
    {
        for(i=l,j=0; i>=0; i--,j++)
        {
            str_new[j]=str[i];
        }
        str_new[j]='\0';
    }


}

int main()
{
    char str[100],str_new[100];
    gets(str);
    strrev(str,str_new);
    puts(str_new);
}
