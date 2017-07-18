#include<stdio.h>
int fibo(int n,int a[])
{
    int x=0,y=1,temp,sum = 0,i;
    for(i=0;i<n;i++)
    {
        a[i]=x;
        temp = y;
        y = x+y;
        x = temp;
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int sum = fibo(n,a);
    printf("%d\n",sum);
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
