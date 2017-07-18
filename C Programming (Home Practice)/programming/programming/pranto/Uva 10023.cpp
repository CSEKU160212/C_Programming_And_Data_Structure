#include<stdio.h>
#include<math.h>

int main()
{
    long long int x,y,i,j;

    scanf("%lld",&i);
    for(j=0; j<i; j++)
    {
        printf("\n");
        scanf("%lld",&y);
        x=sqrt(y);
        printf("%lld\n",x);

    }
}
