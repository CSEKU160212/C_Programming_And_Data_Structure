#include<stdio.h>
int fac(int w)
{
    int i, m, mul=1;
    for(i=0; i<w; i++)
    {
        m=(w-i);
        mul=mul*m;
    }
    return mul;
}

float nCr(float y, float q)
{
    float ncr, m1, m2, m3;
   m1=fac(y);
   m2=fac(y-q);
   m3=fac(q);
   ncr=m1/(m2*m3);

   return ncr;

}

float nPr(float z, float t)
{
    float ncr, p1, p2, m3;
   p1=fac(z);
   p2=fac(z-t);
   ncr=p1/p2;

   return ncr;

}

int main()
{
     float n, r;
    float f, p;
    scanf("%f%f", &n, &r);
    f=nCr(n, r);
    printf("nCr= %.2f\n", f);


    p=nPr(n, r);
    printf("npr= %.2f", p);
    return 0;

}

