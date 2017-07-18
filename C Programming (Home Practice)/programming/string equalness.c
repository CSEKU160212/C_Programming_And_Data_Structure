
#include <stdlib.h>

int main()
{
int flag=0,i,la=0,lb=0;
char A[1000],B[1000];
gets(A);
gets(B);
for(i=0;A[i]!='\0';i++)
{
la++;
}
for(i=0;B[i]!='\0';i++)
{
lb++;
}
if(la!=lb)
{
flag=1;
}
else
for(i=0;i<la;i++)
{
if(A[i]!=B[i])
{
flag=1;
break;
}
}
if(flag==1)
printf("Both strings are not equal");
else
printf("Both strings are equal");
return 0;}
