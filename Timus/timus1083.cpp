#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    int n, mul=1;
    string s;
    cin>>n>>s;
    int len=s.length();
    for(int i=n; i>0; i=i-len)
        mul*=i;
    cout<<mul<<endl;
    return 0;
}
