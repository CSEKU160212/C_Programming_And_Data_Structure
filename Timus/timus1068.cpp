#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=0)
        cout<<((n*(n-1))/2)*(-1)+1;
    else
        cout<<(n*(n+1))/2<<endl;
    return 0;
}
