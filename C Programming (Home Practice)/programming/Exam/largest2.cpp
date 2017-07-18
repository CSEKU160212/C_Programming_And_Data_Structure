#include<stdio.h>
#define max 3
int main()
{
    int lg1,lg2,temp,i;
    int a[max];
    for(i=0; i<max; i++)
    {
        scanf("%d",&a[i]);
    }
    lg1 = a[0];
    lg2 = a[1];

    if(lg1<lg2)
    {
        temp = lg1;
        lg1 = lg2;
        lg2 = temp;
    }
    for(i=2; i<max; i++)
    {
        if(a[i]>=lg1)
        {
            lg2 = lg1;
            lg1 = a[i];
        }
        if(a[i]>lg2)
        {
            lg2 = a[i];
        }
    }
    double avg=0.0;
    avg = (lg1+lg2)/2;
    printf("%lf",avg);


}
