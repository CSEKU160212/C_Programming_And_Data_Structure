#include<stdio.h>
int main()
{
    char A[100], count=0;
    int i;
    gets(A);
   for(i=0; A[i]!='\0'; i++)
   {
       if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
        count++;
   }
   printf("%d", count);
}
