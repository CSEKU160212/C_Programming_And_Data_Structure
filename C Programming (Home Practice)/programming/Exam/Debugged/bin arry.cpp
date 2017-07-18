#include<stdio.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;;i++)
    {
        a[i]=n%2;
        n/=2;
        if(n==0)
            break;
    }
    for(i=i;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}
