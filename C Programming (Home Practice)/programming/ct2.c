
#include <stdio.h>
#include<stdlib.h>
int main()
{
int s,f,i,j,count=0;
scanf("%d",&s);
scanf("%d",&f);
for(j=s;j<=f;j++)
{
for(i=2;i<=j/2;i++)
{
if(j%i==0)
count++;
}
if (count>=3)
{
printf(" %d",j);
}
count = 0;
}
return 0;
}
