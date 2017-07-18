#include<stdio.h>
double ex(double a)
{
     double res,pow,fact,prev;

        prev = 1;
        res = 1;
        for(int i=1; ;i++)
        {
            pow =1;
            fact = 1;
            for(int j=1;j<=i;j++)
            {
                pow*=a;
                fact*=j;
            }
            res = res+pow/fact;
            if(prev==res)
            {
                break;
            }
            prev = res;
        }
        return res;

}
int main()
{
    double angle,res;
    while(1)
    {
        printf("enter angle:");
        scanf("%lf",&angle);
        printf("res=%lf\n",ex(angle));
        printf("\n");
    }
}
