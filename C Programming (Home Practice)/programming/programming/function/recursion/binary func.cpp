#include<stdio.h>
int bin(int n)
{
    int i,sum=0;
    for(i=1; n>0; i*=10)
    {
        sum+=(n%2)*i;
        n/=2;
    }
    return sum;

}
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",bin(n));
}




