#include<stdio.h>

int perimetre(int a,int b,int c)
{
     return  (a + b + c);

}

int semiperimetre(int a,int b,int c)
{
      return  perimetre(a,b,c)/2;
}
int area(int a,int b)
{
    return (a*b)/2;

}

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        printf("%d\n",perimetre(a,b,c));
        printf("%d\n",semiperimetre(a,b,c));
        printf("%d\n",area(a,b));
    }
}
