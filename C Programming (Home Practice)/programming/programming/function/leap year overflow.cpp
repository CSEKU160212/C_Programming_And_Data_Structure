#include<stdio.h>
int yearr(int year);
int main()
{

    int year;
    scanf("%d",&year);
    if(!yearr(year))
    {
        printf("It is a leap year.");
    }
    else
    {
        printf("It is not a leap year");
    }

}
int yearr(int year)
{
    if(year%4==0)

        if(year%400==0)
            return 1;
    if(year%100==0)
        return 0;

    else
        return 0;

}
