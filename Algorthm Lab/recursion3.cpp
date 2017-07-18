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

void print(int i, int n)
{
    if(n==i)
        cout<<i<<" ";
    else
    {
          cout<<i<<" ";
        print(i+1, n);
    }
}

int main()
{
    cin>>n;
    print(1, n);
    close;
}

