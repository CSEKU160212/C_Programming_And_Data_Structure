#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,n, N[1001], total;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        total=0;
        cin>>n;
        for(int j=0; j<n; j++)
            {
                cin>>N[j];
                if(N[j]>0)
                   total=total+N[j];
            }
        cout<<"Case "<< i << ": " << total << '\n';
    }

    return 0;
}
