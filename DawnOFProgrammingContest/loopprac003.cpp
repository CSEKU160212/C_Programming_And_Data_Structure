//1*1*1 + 2*2*2 + 3*3*3 +.......+ n*n*n=?
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=pow(i,3);
    }

    cout<<"By using loop the sum is: "<<sum<<endl;

    int sum2=pow(((n*(n+1))/2), 2);

    cout<<"Using Formula the sum is: "<<sum2;

    return 0;
}

