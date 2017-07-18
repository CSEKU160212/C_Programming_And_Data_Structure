#include<stdio.h>

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d\n",gcd(n1,n2));
    main();
}
