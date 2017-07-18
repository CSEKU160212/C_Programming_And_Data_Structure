#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int  t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n>10)
            cout<<n-10<<" "<<n-(n-10)<<"\n";

        else
            cout<<0<<" "<<n<<"\n";
    }

return 0;
}
