#include<stdio.h>

float f(float x,float y)
{
    return (x*x + y*y*y + 10);
}
int main()
{
    float n1,n2;
    scanf("%f %f",&n1,&n2);
    printf("%.4f",f(n1,n2));

}

