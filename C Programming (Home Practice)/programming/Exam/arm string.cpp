#include<stdio.h>
int main()
{
    char st[100],arm[100];
    gets(st);
    int i,j,k,l,temp,pow =1,sum = 0,flag;
    for(l=0;st[l]!=NULL;l++){}
    for(i=0;i<l;i++)
    {
        temp = st[i] - '0';
        for(j=1;j<=l;j++)
        {
            pow*=temp;
        }
        sum+=pow;
        pow = 1;
    }
    for(i=l-1;i>=0;i--)
    {
        temp = sum%10;
        arm[i] = temp + '0';
        sum/=10;
    }
    flag = 1;
    for(i=0;i<l;i++)
    {
        if(arm[i]!=st[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag ==1)
        printf("armstrong");
    else
    {
        printf("Not armstrong");
    }
}
