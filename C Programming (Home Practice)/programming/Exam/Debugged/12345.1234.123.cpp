#include<stdio.h>
int main()
{
    int r,c,num;
    scanf("%d",&num);
    for(;num>=1;num--)
    {
        for(c=1;c<=num;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }

}
