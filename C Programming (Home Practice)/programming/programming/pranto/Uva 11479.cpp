#include<stdio.h>
int main()
{
    long int i,j,a,b,c;
    scanf("%d",&i);
    for(j=1; j<=i; j++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a+b)<=c||(b+c)<=a||(c+a)<=b)
        {
            printf("Case %ld: Invalid\n",j);
        }
        else if(a<=0||b<=0||c<=0)
        {
            printf("Case %ld: Invalid\n",j);
        }
        else if(a==b&&b==c)
        {
            printf("Case %ld: Equilateral\n",j);
        }
        else if(a==b||b==c||c==a)
        {
            printf("Case %ld: Isosceles\n",j);
        }
        else
        {
            printf("Case %ld: Scalene\n",j);
        }
    }
    return 0;
}

