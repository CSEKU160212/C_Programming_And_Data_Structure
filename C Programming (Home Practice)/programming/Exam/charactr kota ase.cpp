#include<stdio.h>
int main()
{
    char st[100];
    gets(st);
    int i,j,l,flag=0,count=0,n;

    scanf("%d",&n);
    for(i=0;;i++)
    {
        if(st[i]==NULL)
        {
            break;
        }
    }
    l = i;
    for(i=0;i<l;i++)
    {
        if(st[i]==n)
        {
            flag = 1;
            printf("%d ",i+1);
            count++;
        }
    }
    if(flag==1)
    {
        printf("%d is found at %d",n,count);
    }
    else
    {
        printf("Not found");
    }
}
