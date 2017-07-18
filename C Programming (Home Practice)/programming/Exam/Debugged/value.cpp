#include<stdio.h>
int main()
{
   int x[4] = {10,20,30,40},a,b,c;
   int*p;
   p=&x[0];
   a=*p++;
   b=*++p;
   c=++*p;
   printf("%d %d %d",a,b,c);
}

