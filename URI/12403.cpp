#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, K, total=0;
    string s;
    cin>>T;

    for(int i=0; i<T; i++)
    {
        cin>>s;
        if(s=="donate")
        {
             cin>>K;
             total+=K;
        }
    else
            cout<<total<<endl;
    }
    return 0;
}
