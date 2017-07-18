#include <iostream>
using namespace std;

int x = 1;

void f(int x)
{
    x++;
    cout<<"local x in f: "<<x<<endl;
    cout<<"global x in f: "<<::x<<endl;
    ::x++;
}

int main()
{
    int x = 5;
    cout<<"local x in main : "<<x<<endl;
    cout<<"global x in main : "<<::x<<endl;
    f(x);
    cout<<"local x in main : "<<x<<endl;
    cout<<"global x in main : "<<::x<<endl;
}
