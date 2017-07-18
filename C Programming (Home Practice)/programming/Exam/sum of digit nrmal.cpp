#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,res,num;
    scanf("%d",&num);
    a =  num%10;
    x=num/10;
    b = x%10;
    y = x/10;
    c=y%10;
    d=y/10;
    res = a +b+c+d;
    printf("%d",res);

}
