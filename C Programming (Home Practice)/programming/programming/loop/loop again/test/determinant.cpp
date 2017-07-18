#include <stdio.h>
int main()
{
    int n,count,factorial = 1;
    printf("Enter an integer\n");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Error!! negative cant be factorial\n");
    }
    else
    {
        for(count=1;count<=n;count++)
        {
            factorial=factorial*count;
        }
        printf("%d",factorial);
    }
    return 0;
}
