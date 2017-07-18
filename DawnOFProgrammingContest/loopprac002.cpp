//1*1+2*2+3*3+.......+n*n=?
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=i*i;
    }

    cout<<"By using loop the sum is: "<<sum<<endl;

    int sum2=(n*(n+1)*(2*n+1))/6;

    cout<<"Using Formula the sum is: "<<sum2;

    return 0;
}
