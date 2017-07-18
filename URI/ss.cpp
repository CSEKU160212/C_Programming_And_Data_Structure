#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long long int num;
    while(scanf("%lld", &num)==1)
    {
        if(num==0)
            break;

        long long int sqn=sqrt(num);
        if(num==sqn*sqn)
            printf("Special\n");
        else
            printf("Ordinary\n");

    }
    return 0;

}
