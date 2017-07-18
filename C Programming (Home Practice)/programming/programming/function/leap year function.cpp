#include<stdio.h>
int year(int y)
{
    int flag = 0;
    if(y%400 == 0) flag=1;
    else if(y%100==0) flag=0;
    else if(y%4==0) flag = 1;

    return flag;
}
int main()
{
    int y,flag;
    while(scanf("%d",&y)==1 && y>0)
    {
        flag = year(y);
        if(flag==1)
        {
            printf("%d is leap year\n",y);
        }
        else
        {
            printf("%d is not leap year\n",y);
        }

    }

}
