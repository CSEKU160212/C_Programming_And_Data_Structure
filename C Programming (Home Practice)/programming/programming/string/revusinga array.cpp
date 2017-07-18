#include<stdio.h>
int main()
{
    char str[100];
    char temp;
    gets(str);
    int i,j,l;
    for(i=0;;i++)
    {
        if(str[i]=='\0')
        {
            break;
        }
    }
    l=i-1;
    for(j=0;j<i/2;j++)
    {
        temp=str[j];
        str[j] = str[l];
        str[l]=temp;
        l--;
    }
    puts(str);
}
