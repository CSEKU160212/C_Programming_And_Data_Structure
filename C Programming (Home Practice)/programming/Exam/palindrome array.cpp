#include<stdio.h>
int main()
{
    int i,j,a[100],res=0,temp,n;
    scanf("%d",&n);
    temp = n;
    for(i=0; ; i++)
    {
        a[i] = temp%10;
        temp/=10;
        if(temp==0)
        {
            break;
        }
    }
    for(j=0;j<=i;j++)
    {
        res = res*10 + a[j];
    }
    if(res==n)
    {
        printf("Palindrome");
    }
    else
        printf("Not palindrome");

}
