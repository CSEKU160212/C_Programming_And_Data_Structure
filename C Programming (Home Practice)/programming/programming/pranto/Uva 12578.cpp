#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int i,j;
    double tr,tg,w,r,l;
    scanf("%d",&i);
    for(j=0; j<i; j++)
    {
        scanf("%lf",&l);
        w=(l*6)/10;
        r=l/5;
        tr=PI*r*r;
        tg=l*w-tr;
        printf("%.2lf %.2lf\n",tr,tg);
    }
}
