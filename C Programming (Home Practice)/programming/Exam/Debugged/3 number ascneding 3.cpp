#include<stdio.h>
int main()
{
    float a,b,c,x,y,z,avg=0,sum = 0;
    scanf("%f %f %f",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            x=a;
            if(b>c)
            {
                y=b;
                z=c;
            }
            else
            {
                y=c;
                z = b;
            }
        }
        else
        {
            x=c;
            y=a;
            z=b;
        }
    }
    else
    {
        if(b>c)
        {
            x=b;
            if(a>c)
            {
                y=a;
                z=c;
            }
            else
            {
                y=c;
                z=b;
            }
        }
        else
        {
            x=c;
            y=b;
            z=a;
        }
    }
    printf("%f %f %f",x,y,z);
}
