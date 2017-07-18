#include<stdio.h>
int main()
{
    float x,y,z,m1,m2,avg;
    scanf("%f%f%f",&x,&y,&z);
    m1=(x<y)?x:y;
    m2=(m1<z)?m1:z;
    avg=(((x+y+z)-m2)/2);
    printf("%.f",avg);
    return 0;
}
