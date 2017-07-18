#include <stdio.h>

int main()
{
   int n, sum = 0, c, array[100];
   printf("how many integers you want to add: \n");
   scanf("%d", &n);
   printf("Integers\n");

   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
      sum = sum + array[c];
   }

   printf("Sum = %d\n",sum);

   return 0;
}
