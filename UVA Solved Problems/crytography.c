#include<stdio.h>
#include<math.h>
int main()
{
    double a,res;
    int b;
    while(scanf("%d%lf",&b,&a)==2)
    {
        int x=(1/b);
        res=(pow(a,x));
        printf("%lf\n",res);
    }
}
