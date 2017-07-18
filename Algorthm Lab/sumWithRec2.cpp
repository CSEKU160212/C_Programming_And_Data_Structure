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

ll sumWithRecursion(int n)
{
    if(n==0)
        return 0;
    else
    {
        return n+sumWithRecursion(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<sumWithRecursion(n);
    close;
}

