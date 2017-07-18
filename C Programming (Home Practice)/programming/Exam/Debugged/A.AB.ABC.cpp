#include<stdio.h>
int main()
{
    char ch,r,c;
    scanf("%c",&ch);
    printf("\n");
    if(ch>='a' && ch<='z')
        ch = ch - 32;
    for(r = 'A';r<=ch;r++)
    {
        for(c='A';c<=r;c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }

}

