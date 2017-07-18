#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float a, b, c, d, e, f, g, h, i, j, k, l, m, o, p, q, r, sum;
    printf("Enter Total number of Products: ");
    scanf("%d", &n);

    if(n == 1){
        printf("Enter The Price: ");
        scanf("%f", &a);
        sum=a;

    }
    else if(n==2){
             printf("Enter The Prices one by one: ");
             scanf("%f%f", &c, &d);
             sum=c+d;

    }
     else if(n==3){
             printf("Enter The Prices one by one: ");
             scanf("%f%f%f", &e, &f, &h);
             sum=e+f+h;

    }
     else if(n==4){
             printf("Enter The Prices one by one: ");
             scanf("%f%f%f%f", &i, &j, &k, &l);
             sum=i+j+k+l;

    }
     else if(n==5){
             printf("Enter The Prices one by one: ");
             scanf("%f%f%f%f%f", &m, &o, &p, &q, &r);
             sum=m+o+p+q+r;

    }

        printf("Total price: %0.2f\n", sum);
        printf("Enter Given amount: ");
        scanf("%f", &g);
        b=g-sum;
        printf("Back: %0.2f - %0.2f = %0.2f", g, sum, b);


}
