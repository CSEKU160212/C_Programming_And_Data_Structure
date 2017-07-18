#include<stdio.h>
int main ()
{
    int a;
    printf("enter the MP:");
    scanf("%d", &a);
    if(a%4==0)
    {
        printf("%d have to go in section D",a);
    }
    else
    {
        if(a%4==1)
        {
            printf("%d have to go in section A",a);
        }
        else
        {
            if(a%4==2)
            {
                printf("%d have to go in section B",a);
            }
            else
            {
                printf("%d have to go in section C",a);
            }
        }
    }
}

