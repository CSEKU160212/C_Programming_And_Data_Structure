#include<stdio.h>
int pal(int n)
{
    int i,j,temp,ara[100],res=0,flag  = 0;;
    temp=n;
    for(i=0; ; i++)
    {
        ara[i]=n%10;
        n=n/10;
        if(n==0)
        {
            break;
        }
    }
    for(j=0; j<=i; j++)
    {
        res = res*10 + ara[j];
    }
    if(res==temp)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;


}
int main()
{
    int n,flag;
    scanf("%d",&n);
    flag = pal(n);
    if(flag==1)
        printf("palindrome\n");
    else
        printf("not palindrome\n");

}

