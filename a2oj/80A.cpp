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

int isprime(int n)
{
    if(n <= 1)
        return 0;
    if(n <= 3)
        return 1;
    if(n%2 == 0 || n%3 == 0)
        return 0;
    for(int i=5; i<=sqrt(n); i+=6)
    {
        if(n%i == 0 || n%(i+2) == 0)
            return 0;
    }

    return 1;
}


int main()
{

    int n, m, temp;
    cin>>n>>m;

    if(n==2 && m==3)
        cout<<"YES"<<endl;
    else
    {
        int k=0;
        if(n==2)
            temp=n+1;
        else
            temp=n+2;
        for(int i=temp; i<m;)
        {
            if(isprime(i))
            {
                k=1;
                break;
            }
            i=i+2;
        }

        if(k==0 && isprime(m))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    close;
}
