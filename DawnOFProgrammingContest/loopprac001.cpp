//1+2+3+.......+n=?

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++)
        sum+=i;

    cout<<"By using direct loop the sum is: "<<sum<<endl;


    cout<<"By using formula the sum is: "<<(n*(n+1))/2;
    return 0;
}
