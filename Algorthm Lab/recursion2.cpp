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

void print(int n)
{
    if(n==0) return;
    else
    {
        print(n-1);
          cout<<n<<" ";
    }
}

int main()
{

    int n;
    cin>>n;
    print(n);
    close;
}
