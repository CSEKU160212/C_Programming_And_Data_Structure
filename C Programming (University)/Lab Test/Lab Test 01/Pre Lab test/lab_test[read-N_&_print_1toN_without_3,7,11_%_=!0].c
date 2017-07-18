#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    L: i=i+1;
   if(i<=n)
   {
   if(i%3==0 || i%7==0 || i%11==0)
    goto L;

    else

      printf("\n%d",i);
    goto L;

}
    return 0;
}
