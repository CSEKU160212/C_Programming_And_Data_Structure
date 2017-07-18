#include<stdio.h>
int main()
{
char A[100],b,h;
gets(A);
scanf(" %c",&b);
scanf(" %c",&h);
int i,j=0;
for(i=0;A[i]!='\0';i++)
{
j++;
}
for(i=0;i<j;i++)
{
if(A[i]==b)
{
A[i]=h;
}
}
printf( "%s ",A);
return 0;
}

