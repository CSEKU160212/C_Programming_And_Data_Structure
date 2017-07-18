#include<stdio.h>
int gcd(int x,int y)
{
    if(x==0)
        return y;
    while(y!=0)
    {
        if(x>y)
            x = x-y;
        else
            y = y-x;
    }
        return x;
}
int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    int hcf,lcm;
    hcf  = gcd(x,y);
    lcm = (x*y)/hcf;
    printf("%d",lcm);

}

