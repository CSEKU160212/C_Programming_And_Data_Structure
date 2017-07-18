#include<stdio.h>
int main()
{
    char st[100];
    gets(st);
    int i,count=0,sum = 0;
    for(i=0;st[i]!=NULL;i++)
    {
        if(st[i]>='0' && st[i]<= '9')
        {
            count++;
            sum+=(st[i]-'0');
        }
    }
    printf("No of digits : %d",count);
    printf("Sum is : %d",sum);
}
