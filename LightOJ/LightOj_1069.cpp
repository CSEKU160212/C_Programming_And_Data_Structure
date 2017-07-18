#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, T;
    cin>>T;
    for(int i =1; i<=T; i++)
    {
        cin>>a>>b;
        if(b==a || a<b)
            printf("Case %d: %d\n",i,(19+b*4));
        else if(a>b)
            printf("Case %d: %d\n",i,(19+a*4+(a-b)*4));
    }
    return 0;
}
