//1-2+3-4+.......nth term;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=5, sum=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
            sum-=i;
        else
            sum+=i;
    }

    cout<<sum;
        return 0;
}
