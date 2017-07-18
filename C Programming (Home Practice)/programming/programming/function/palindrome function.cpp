/*Program to check whether a string is palindrome or not using function*/
#include<stdio.h>
#include<conio.h>
char string_palin(char str[]);
int main()
{
    char ch[30];
    printf("Enter string : ");
    gets(ch);
    if(string_palin(ch))
        printf("Entered string Palindrome");
    else
        printf("Entered string not Palindrome");
    return 0;
}

/*function for palindrome*/
char string_palin(char str[])
{
    int i,j;
    for(i=0; str[i]!=NULL; i++);
    for(j=0,i--; j<=i; )
    {
        if(str[i]==str[j])
        {
            i--;
            j++;
        }
        else
            break;
    }
    if(j>i)
        return(1);
    else
        return(0);
}


