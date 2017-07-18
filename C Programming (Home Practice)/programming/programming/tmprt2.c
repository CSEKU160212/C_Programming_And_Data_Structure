#include <stdio.h>
int main()
{
    double farenheit,celsius;
    printf("Enter the temparature in farenheit: ");
    scanf("%lf",&farenheit);
    celsius=(farenheit-32)/1.8;
    printf("temparature in celsius is: %lf",celsius);
    return 0;
}

