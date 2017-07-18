#include <stdio.h>

int main() {

   int st, avs;
   double d, l;
   scanf("%d%d", &st, &avs);
   d=avs*st;
   l=d/12;
   printf("%.3lf\n", l);
    return 0;
}
