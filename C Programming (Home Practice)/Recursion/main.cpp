#include <bits/stdc++.h>

using namespace std;

int Factorial(int n)
{
    if(n<=1)
        return 1;
    return n * Factorial(n-1);
}

int main()
{
    int z;
    cin>>z;
    cout<<Factorial(z)<<endl;
    return 0;
}
