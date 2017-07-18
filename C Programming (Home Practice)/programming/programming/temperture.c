#include <stdio.h>
int main()

{
    double celcius,farenhite;
    printf("temperature in celcius\n");
    scanf("%lf", &celcius);
    farenhite = celcius * 1.8+32;
    printf("temperature in farenhite = %lf\n", farenhite);
}
