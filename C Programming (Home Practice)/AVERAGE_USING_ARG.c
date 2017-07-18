#include<stdio.h>
#include<stdarg.h>

double average(int num, ...)
{
    int i;
    va_list valist;
    double sum=0;

    va_start(valist, num);

    for(i=0; i<num; i++)
    {
        sum+=va_arg(valist, int);
    }
    va_end(valist);
    return sum/num;

}

int main()
{
    printf("%lf\n", average(2,3,4,5,6));
    return 0;
}
