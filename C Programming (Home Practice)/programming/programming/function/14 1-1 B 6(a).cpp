#include <iostream>
using namespace std;

int fib(int n, int a[])
{
    int x = 0, y = 1, temp, sum = 0;

    for(int i = 0; i<n; i++)
    {
        a[i] = x;
        temp = y;
        y = x+y;
        x = temp;
        sum += a[i];
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    int sum = fib(n, a);

    cout<<sum<<endl;
    for(int i = n-1; i>=0; i--)
        cout<<a[i]<<' ';
}
