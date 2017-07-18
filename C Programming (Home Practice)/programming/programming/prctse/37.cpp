#include<stdio.h>
int main()
{
    int num,i;
    printf("Number: ");
    scanf("%d",&num);
    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("Not prime numb\n");
            break;
        }
        i++;
    }
    if(i==num)
    {
        printf("Prime numb\n");
    }
    return 0;
}


