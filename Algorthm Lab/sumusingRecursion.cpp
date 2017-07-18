#include<bits/stdc++.h>

#define sc scanf
#define pf printf
#define ll long long int
#define pi 2*acos(0.0)
#define dl double
#define fl float
#define st string
#define close return 0
#define str string

using namespace std;

long long sumWithRecursion(ll sum, int n)
{
    if(n==0)
        return sum;
    else
    {
        sumWithRecursion(sum+n, n-1);
    }
}

int main()
{

    ll sum =0;
    int n;
    cin>>n;
    cout<<sumWithRecursion(sum,n);
    close;
}
