//Fibonacci Series//
#include <stdio.h>
int fib(int n)
{
    int count, i=0, t1=0, t2=1;
    count=2;
    while (count<=n)
    {
        i=t1+t2;
        t1=t2;
        t2=i;
        count++;
        printf("%d\n",i);
    }
    return i;
}

int main()
{
    int  n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    //printf("Fibonacci Series: %d ",t2);
    int r = fib(n);
   // printf("%d\n",r);
}

