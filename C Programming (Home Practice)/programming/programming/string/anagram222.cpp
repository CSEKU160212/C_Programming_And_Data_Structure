#include<stdio.h>
int main()

{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i,j,k,l,flag;
    for(i=0; a[i]!='\0'; i++) {}
    for(j=0; b[j]!='\0'; j++) {}
    if(a[i]!=b[j])
    {
        puts("Not anagrams");
    }
    for(k=0; k<i; k++)
    {
        flag=0;
        for(l=0; l<j; l++)
        {
            if(a[k]==b[l])
            {
                b[l]=7;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            puts("Not anagrams!");
            break;
        }
    }
    if(flag==1)
    {
        puts("Yes anagrams!\n");
    }
}

