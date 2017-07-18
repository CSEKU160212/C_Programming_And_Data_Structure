#include<stdio.h>


long long BigMod(long long B, long long P, long long M)
{
    if(P==0)
        return 1;
    if(P%2==1)
    {
        long long part1=B%M;
        long long int part2=BigMod(B, P-1, M);
        return (part1*part2)%M;
    }

    else
    {
        long long half=BigMod(B, P/2, M);
        return (half*half)%M;
    }
}

int main()
{
  long long B, M, P;

 while(scanf("%lld%lld%lld",&B,&P,&M)==3)
 {
         printf("%lld\n", BigMod(B, P, M));
 }
 return 0;
}
