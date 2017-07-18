#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int x, n, sum = 0, mul = 1;
    cin>>x>>n;

    for(int i = 1; i<=n; i++, mul = 1)
    {
        sum = sum + pow(x,i);

    }

    cout<<1+sum<<endl;
}
