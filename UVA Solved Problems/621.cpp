#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string p;
    cin>>n;
    while(n--)
    {
        cin>>p;
       if (p == "1" || p== "4" ||  p=="78")
            cout<<"+"<<endl;
        else if(p[p.length()-1] == '5' && p[p.length()-2]=='3')
            cout<<"-"<<endl;
        else if(p[p.length()-1] == '4' && p[0]=='9')
            cout<<"*"<<endl;
        else
            cout<<"?"<<endl;
    }
    return 0;
}
