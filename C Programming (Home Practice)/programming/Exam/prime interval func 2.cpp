#include<stdio.h>
int isprime(int num)
{
    int i=2,flag;
    while(i<=num/2)
    {
        if(num%i==0)
            return 0;
        else
        i++;

    }
    return 1;
}
int main()
{
    int n1,n2,flag,j;
    scanf("%d %d",&n1,&n2);
    for(j=n1+1;j<n2;j++)
    {
        flag = isprime(j);
        if(flag ==1)
        {
            printf("%d ",j);
        }
    }
}
