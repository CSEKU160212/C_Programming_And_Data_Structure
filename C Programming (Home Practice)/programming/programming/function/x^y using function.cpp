#include <stdio.h>

float power(int x, int y)
{
    float mul = 1.0;
    int i;
    if(y>0)
    for(i = 1; i<=y; i++) mul *= x;
    if(y<0)
     for(i=-1;i>=y;i--) mul/=x;
    return mul;
}
int main()
{
    int b, p;
    printf("Enter base and expotential\n");
    scanf("%d %d", &b, &p);
    printf("%.10f",power(b,p));

}
