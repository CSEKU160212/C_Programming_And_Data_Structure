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

ll factorial(int n)
{
    if(n==0)
        return 1;
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{

    ll sum =0;
    int n;
    cin>>n;
    cout<<factorial(n);
    close;
}
