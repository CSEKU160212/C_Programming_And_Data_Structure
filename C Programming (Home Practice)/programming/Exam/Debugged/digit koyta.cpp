#include <iostream>
using namespace std;

void digit(int n)
{
    int sum = 0;
    for(; n>0; n/=10, sum++);
    cout<<sum<<endl;
}

int main()
{
    int n;
    cin>>n;
    digit(n);
}
