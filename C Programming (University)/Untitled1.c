#include<stdio.h>
int main()
{
   long long int a, b, c, d;
    scanf("%lld%lld", &a, &b);
    if(a>b){
    c=a-b;
    printf("%lld", c);}
    else{
    d=b-a;
    printf("%lld", d);}
    return 0;
}
