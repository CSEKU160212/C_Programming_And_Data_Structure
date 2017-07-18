#include<stdio.h>
#include<conio.h>


long int fibo(int n)
{
    int count,t1=0, t2=1, i=0;
  printf("Fibonacci Series: %d ",t2);
  count=2;
  while (count<=n)
  {
      i=t1+t2;
      t1=t2;
      t2=i;
      count++;
      printf("%d ",i);
  }
  return i;
}
int main()
{
    int n;
    long int i;
    //long int fibo(int n);
    printf("Enter the limit:\n");
    scanf("%d",&n);
    i=fibo(n);
   // printf("\nThe %dth Fibonacci number is %ld",n,i);
}

