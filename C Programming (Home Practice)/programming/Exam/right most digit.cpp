#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    int a ,rem;
    a = x;
    while(a!=0)
    {
         rem = a%10;
         break;
    }
    printf("%d",rem);

}
