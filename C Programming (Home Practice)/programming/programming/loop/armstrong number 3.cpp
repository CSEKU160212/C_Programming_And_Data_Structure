#include <iostream>
using namespace std;

int input, sum, mul, i, j, digit, store;

int main()
{
    cin>>input;
    store = input;
    sum = 0;

    for(digit = 0; input>0; digit++)
        input/=10;

    input = store;
    for(int k = 1; k<=digit; k++)
    {
        i = input%10;
        for(mul = 1, j = 0; j<digit; j++)
            mul *= i;
        sum += mul;
        input/=10;
    }

    if(store == sum)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"Not Armstrong Number"<<endl;
}
