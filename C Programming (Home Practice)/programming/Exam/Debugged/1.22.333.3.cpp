#include<stdio.h>
int main()
{
    int r,c,num;
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
}
