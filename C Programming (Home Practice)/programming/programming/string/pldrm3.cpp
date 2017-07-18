#include<stdio.h>
int main()
{
    char str[100],str_new[100];
    gets(str);
    int i,j,l;
    for(l=0; str[l]!='\0'; l++)
    {
        for(i=l,j=0; i>=0; i--,j++)
        {
            str_new[j]=str[i];
        }
        str_new[j]='\0';
        if(str_new[j]==str[i])
        {
            printf("Plaindrome");
        }
        else
        {
            printf("not palindrome\n");
        }
    }

}


