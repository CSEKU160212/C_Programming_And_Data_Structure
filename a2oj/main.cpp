#include <iostream>

using namespace std;

bool isLucky(int n)
{
    int temp=0;
    if(n<4 || n>1000)
        return false;
    while(n/10!=0)
    {
        temp = n %10;
        if(temp!=4 && temp!=7)
            return false;
        n=n/10;
    }
    if(n<4 || (n!=7 && n!=4))
        return false;
    else
    return true;
}

bool checkByLucky(int *A, int n)
{
    for(int i=0; i<14; i++)
    {
        if((n%A[i])==0)
            return true;

    }
    return false;
}

int main()
{
    int n;
    int Arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>n;
   //cout<<isLucky(n)<<endl;
    if(isLucky(n) || checkByLucky(Arr, n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
