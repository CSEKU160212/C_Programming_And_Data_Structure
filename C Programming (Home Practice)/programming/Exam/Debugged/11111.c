#include<stdio.h>
int main()
{
    int c,r,num;
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        for(c=num;c>=1;c--)
        {
            printf("%d ",r);
        }
        printf("\n");
    }
}

