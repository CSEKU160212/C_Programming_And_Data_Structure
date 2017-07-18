#include<stdio.h>
#include<stddef.h>

int main()
{
    char str[100],armstrong[100];
    int temp,sum=0,pow=1,len;
    gets(str);
    for(len=0;str[len]!=NULL;len++){}
    for(int i=0;i<len;i++,pow=1)
    {
        for(int j=0;j<len;j++)
        {

        temp=str[i]-'0';
        pow*=temp;
        }
        sum+=pow;
    }
    for(int i=len-1;i>=0;i--)
    {
        temp=sum%10;
        armstrong[i]=temp+'0';
        sum/=10;

    }
    bool match=true;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=armstrong[i])
        {
            match=false;
            break;
        }
    }
    if(match)
    {
        puts("Armstrong!");
    }
    else
    {
        puts("Not armstrong!");
    }

}
