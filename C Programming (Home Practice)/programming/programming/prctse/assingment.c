#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,a,b,c;
    printf("Enter the numbers:    ");
    scanf("%lf\n%lf\n%lf\n%lf",&x1,&y1,&x2,&y2);
    a=y1-y2;
    b=x2-x1;
    c=x1*y2-x2*y1;
    if(a>0&&b>0&&c>0)
    {
        printf("%lfx+%lfy+%lf=0",a,b,c);
    }
    else if(a>0&&b>0&&c<0)
    {
        printf("%lfx+%lfy%lf=0",a,b,c);

    }
    else if(a>0&&b<0&&c>0)
    {
        printf("%lfx%lfy+%lf=0",a,b,c);
    }
    else if(a>0&&b<0&&c<0)
    {
        printf("%lfx%lfy%lf",a,b,c);
    }
    else if(a<0&&b>0&&c>0)
    {
        printf("%lfx+%lfy+%lf=0",a,b,c);
    }
    else if(a<0&&b>0&&c<0)
    {
        printf("%lfx+%lfy%lf=0",a,b,c);
    }
    else if(a<0&&b<0&&c>0)
    {
        printf("%lfx%lfy+%lf=0",a,b,c);
    }
    else if(a<0&&b<0&&c<0)
    {
        printf("%lfx%lfy%lf=0",a,b,c);
    }
    return 0;
}

