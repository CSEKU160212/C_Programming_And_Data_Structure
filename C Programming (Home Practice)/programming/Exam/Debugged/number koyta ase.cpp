#include<stdio.h>
int main()
{
    char n,st[100];
    int i,count=0,sum=0;
    gets(st);
    scanf("%c",&n);
   for(i=0;;i++)
   {
       if(st[i]=='\0')
       {
           break;
       }
   }
   int l = i;
   for(i=0;i<l;i++)
   {
       if(n==st[i])
       {
           count++;
       }
   }
   printf("%d",count);
   return 0;
}
