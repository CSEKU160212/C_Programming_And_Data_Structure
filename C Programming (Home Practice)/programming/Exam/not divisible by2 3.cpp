#include<stdio.h>
int main()
{
    int i,sum = 0,count = 0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0 && i%3!=0)
        {
            sum+=i;
            count++;
            printf("%d ",i);
        }
    }
    printf("\nThe sum is: %d\nnumber is: %d",sum,count);
}
