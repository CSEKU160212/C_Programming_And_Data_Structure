#include <iostream>
using namespace std;

void decimalToOctal(int n)
{
    if(n==0) return;
    decimalToOctal(n/8);
    cout<<n%8;
}

int main()
{
    decimalToOctal(63);
}
