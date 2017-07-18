#include <stdio.h>

int main()
{
    int a, b, x, lcm;
    scanf("%d%d", &a, &b);
    int n = a*b;

    while(b != 0){
        x = b;
        b = a%b;
        a = x;
    }
    lcm = n/a;
    printf("%d", lcm);

    return 0;
}
