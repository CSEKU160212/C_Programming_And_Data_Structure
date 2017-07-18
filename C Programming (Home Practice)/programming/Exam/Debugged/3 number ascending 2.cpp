#include<stdio.h>
int main()
{
    float a,b,c,avg=0;
    scanf("%f %f %f",&a,&b,&c);
    float x, y, z;

    if(a>b)
    {
        if(a>c)
        {
            x = a;
            if(b>c)
            {
                y = b;
                z = c;
            }
            else
            {
                y = c;
                z = b;
            }
        }
        else
        {
            x = c;
            y = a;
            z = b;
        }
    }
    else
    {
        if(b>c)
        {
            x = b;
            if(a>c)
            {
                y = a;
                z = c;
            }
            else
            {
                y = c;
                z = a;
            }
        }
        else
        {
            x = c;
            y = b;
            z = a;
        }
    }
    printf("%f %f %f\n",x,y,z);
    printf("%f %f %f\n",z,y,x);
    avg = (x + y)/2;
    printf("%f",avg);

}
