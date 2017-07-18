#include<stdio.h>
int s,r;
int findsum(int n)
{
    if(n)
    {
        r = n%10;
        s = s+ r;
        findsum(n/10);
    }
    else
        return s;
}
int main()
{
    int num,add;
    scanf("%d",&num);
    add= findsum(num);
    printf("%d",add);

}

