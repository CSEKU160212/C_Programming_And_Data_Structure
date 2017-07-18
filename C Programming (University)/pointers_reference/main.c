#include <stdio.h>
#include <stdlib.h>

 void point(int *ptr, int *ptr2);
int main()
{

   int x=10, y=20, *p2, *p;
   p=&x;
   p2=&y;
   point(p, p2);
   printf("%d %d", x,y);
    return 0;
}
void point(int *ptr, int *ptr2)
{
    *ptr=100;
    *ptr2=50;
}
