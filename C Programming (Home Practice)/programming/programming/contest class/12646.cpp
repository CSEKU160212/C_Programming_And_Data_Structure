#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if((a == b) && (b == c))
            cout << "*" << endl;
        else if(a==b && b!=c)
            cout << "C" << endl;
        else if(a!=b && b==c)
            cout << "A" << endl;
        else if(a!=b && b!=c)
            cout << "B" << endl;
    }
    return 0;
}
