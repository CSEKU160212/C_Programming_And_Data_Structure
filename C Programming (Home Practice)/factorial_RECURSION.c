#include<stdio.h>

#define CSEKU_160212 main()
#define sc1(x) scanf("%d", &x)
#define sc2(x1,x2) scanf("%d %d", &x1, &x2)
#define pf1(x) printf("%d\n", x)
int factorial(int n)
{
    if(n <= 1)
        return 1;
   return n * factorial(n-1);
}

int CSEKU_160212
{
    int x;
    sc1(x);
    pf1(factorial(x));
    return 0;
}
