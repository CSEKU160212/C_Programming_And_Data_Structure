#include<stdio.h>
float area(float l,float w)
{
    return (l*w);
}
int main()
{
    float l,w;
    while(scanf("%f %f",&l,&w)==2)
    {
        printf("%f\n",area(l,w));
    }
}


