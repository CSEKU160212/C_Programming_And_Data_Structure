#include <stdio.h>
int main()
{
    int n,c=2,flag = 0;
    printf("Enter a number to check prime or not: \n");
    scanf("%d", &n);

    if(n==1)
    {
        flag = 1;
        printf("1 is not prime.\n");
    }

    for(c=2; c<=n-1; c++)
    {
        if(n%c==0)
        {

            flag = 1;
            printf("%d is not prime",n);
            break;

        }


    }
    if(flag==0)
        printf("%d is prime",n);



}

