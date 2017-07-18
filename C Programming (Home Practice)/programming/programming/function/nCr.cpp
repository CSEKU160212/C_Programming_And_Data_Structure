#include<stdio.h>
int fact(int x)
{
    int res = 1;
    for(int i=1; i<=x; i++)
    {
        res*=i;
    }
    return res;
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int a = fact(r);
    int b = fact(n-r);
    int c = fact(n);
    int nCr = c/(a*b);
    printf("%d",nCr);

}
