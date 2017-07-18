#include<stdio.h>
int maximum()
{
    int max=0;
    int x;
    for(int i=1;i<=3;i++)
    {
        scanf("%d",&x);
        if(x>max)
            max = x;
    }
    return max;
}
int main()
{
    printf("%d",maximum());
}
