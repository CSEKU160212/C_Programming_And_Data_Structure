//150217//
#include<stdio.h>

double perimetre(double a,double b,double c)
{
     return  (a + b + c);

}

double semiperimetre(double a,double b,double c)
{
    return perimetre(a,b,c)/2;
}
double area(double a,int b)
{
    return (a*b)/2;

}

int main()
{
    double a,b,c;
    printf("Enter length,height & base separating by space\n");
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        printf("\n");
        printf("Perimetre is %.3lf\n\n",perimetre(a,b,c));
        printf("Semiperimetre is %.3lf\n\n",semiperimetre(a,b,c));
        printf("Area is %.3lf\n\n",area(a,b));
    }
}

