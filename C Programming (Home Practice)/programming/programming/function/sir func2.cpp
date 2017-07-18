#include<stdio.h>

int f(int x)
{
    return (x*x*x - 2*x*x + 8*x - 3);
}
int main()
{
   for(int i=0;i<=10;i++)
   {
       printf("%d\n",f(i));
   }
}

