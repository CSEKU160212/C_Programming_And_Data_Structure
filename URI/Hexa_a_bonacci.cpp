#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    long long n,caseno = 0,cases,fn[10005];
    scanf("%lld",&cases);
    while( cases-- ) {
        cin>>fn[0];
        cin>>fn[1];
        cin>>fn[2];
        cin>>fn[3];
        cin>>fn[4];
        cin>>fn[5];
        cin>>n;
          for(int i=6;i<=n;i++)
          fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])%10000007;
        long long int s=fn[n]% 10000007;
        cout<<"Case "<<++caseno<<": "<<s<<"\n";
    }
    return 0;
}
