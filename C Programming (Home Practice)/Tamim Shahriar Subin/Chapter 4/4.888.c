#include<stdio.h>
int main()
{
   int n, m=0, i;
   printf("Enter the Number: ");
   scanf("%d", &n);
   for(i=1; i<=10; i=i+1){
        m=m+n;
        printf("%d X %d = %d\n", n, i, m);
        }

   return 0;
}
