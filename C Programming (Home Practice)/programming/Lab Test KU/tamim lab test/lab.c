#include <stdio.h>

int main()
{
    float a,b,c,x,m,n,y,z,s,num;

    scanf("%f%f%f",&a,&b,&c);

    x=(a>b)?a:b;
    m=(x>c)?x:c;
    y=(a<b)?a:b;
    n=(y<c)?y:c;
    z=(a+b+c)-(m+n);
    s=m+z;

    num=s/2;

    printf("%.f",num);

    return 0;

}
