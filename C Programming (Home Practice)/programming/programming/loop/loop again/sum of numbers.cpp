#include <stdio.h>
#include <conio.h>
int main()
{
    long int n,sum,range;
    printf("how many numbers do u want to calculate? : \n");
    scanf("%ld",&range);
    sum = 0;
    for(n=1; n<=range; n++)
        sum=sum+n;
    printf("Sum of all numbers from 1 to %ld is : %ld",range,sum);
}
