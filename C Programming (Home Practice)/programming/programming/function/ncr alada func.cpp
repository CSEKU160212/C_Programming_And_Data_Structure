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
int nCr(int n,int r)
{

    int a = fact(r);
    int b = fact(n-r);
    int c = fact(n);
    return  c/(a*b);

}
int nPr(int n,int r)
{
    int b = fact(n-r);
    int c = fact(n);
    return c/b;
}

int main()
{
    int n,r,res;
    scanf("%d %d",&n,&r);
    printf("%d\n",nCr(n,r));
    printf("%d\n",nPr(n,r));

}


