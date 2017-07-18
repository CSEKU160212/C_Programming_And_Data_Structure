#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value;
    double result;

    /* Assign the value we will find the exp of */
    value = 5;

    /* Calculate the exponential of the value */
    result = exp(value);

    /* Display the result of the calculation */
    printf("The Exponential of %f is %f\n", value, result);

    return 0;
}
