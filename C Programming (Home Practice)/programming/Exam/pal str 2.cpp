#include<stdio.h>
int main()
{
    char st[100],rev_st[100];
    gets(st);
    int i,j,l,flag;
    for(l=0;st[l]!=NULL;l++){}
    for(i=0;i<l;i++)
    {
        rev_st[l-i-1]=st[i];
    }
    flag = 1;
    for(i=0;i<l;i++)
    {
        if(rev_st[i]!=st[i])
            flag = 0;
        break;
    }
    if(flag==1)
    {
        printf("palindrome");
    }
    else
        printf("Not palindrome");

}
