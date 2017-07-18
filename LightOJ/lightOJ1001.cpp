#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        if(n>10)
            printf("%d %d\n", 10, n-10);
        else
            printf("%d %d\n", 0, n);
    }
    return 0;
}
