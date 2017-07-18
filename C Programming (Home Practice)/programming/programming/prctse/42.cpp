#include <stdio.h>
int main()

{
    int n,c,sum=0,value;
    printf("how many integers: \n");
    scanf("%d", &n);

    printf("Enter integers: \n",n);
    for(c=1;c<=n;c++)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
    printf("the addition is :  %d",sum);
    return 0;

}
