#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int input;
    cin>>input;
    int store = input, len;

    for(len = 0; store; store/=10, len++);
    for(int x = pow(len,10); x>1; x/=10)
        cout<<x<<endl;


}

