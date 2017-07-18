#include<stdio.h>
int main()
{
    float i,j,k,t;
    scanf("%f%f%f",&i,&j,&k);
    if(i>=j&&i>=k&&j>=k)
    {
        t=(i+j)/2;
    }
    else if(i>=j&&i>=k&&k>=j)
    {
        t=(i+k)/2;
    }
    else if(j>=i&&j>=k&&k>=i)
    {
        t=(j+k)/2;
    }
    else if(j>=i&&j>=k&&i>=k)
    {
        t=(j+i)/2;
    }
    else if(k>=i&&k>=j&&i>=j)
    {
        t=(k+i)/2;
    }
    else if(k>=j&&k>=i&&j>=i)
    {
        t=(k+j)/2;
    }
    printf("%.f",t);
    return 0;
}
