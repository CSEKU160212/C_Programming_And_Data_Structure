#include <iostream>
using namespace std;

int power(int base, int power)
{
    int mul = 1;
    for(int i = 1; i<=power; i++) mul *= base;
    return mul;
}

int main()
{
    int input;
    cin>>input;
    int store = input, len;

    for(len = 0; store; store/=10, len++);
    for(int x = power(10, len); x>1; x/=10)
        cout<<input%x<<endl;
}
