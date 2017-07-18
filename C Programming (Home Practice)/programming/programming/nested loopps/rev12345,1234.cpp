/*c program for number triangle pyramid*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int num,c,r;
 printf("Enter loop repeat number(rows): ");
 scanf("%d",&num);
 for(; num>=1; num--)
 {
  for(c=1; c<=num; c++)
     printf("%d",c);
  printf("\n");
 }
 return 0;
}
