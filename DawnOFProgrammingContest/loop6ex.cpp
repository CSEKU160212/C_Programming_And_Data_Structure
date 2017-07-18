#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n, sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=(i*temp);
        temp--;
    }

    cout<<sum;
    return 0;
}
