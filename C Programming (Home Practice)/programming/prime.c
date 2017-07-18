
#include<math.h>

int main()
{
int a,b,n,rn,i,flag;

scanf("%d %d", &a, &b);

for(n=a;n<=b;n++)
{
flag=0;
rn=sqrt(n);

for(i=2;i<=rn;i++)
{
if(n%i==0)
{
flag+=1;
break;

}
}
if(flag==0)
{
printf("%d\n",n);
}
}
return 0;
}
