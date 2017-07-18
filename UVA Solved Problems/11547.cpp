#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int mul_div= (n * 567)/9;
        int add=mul_div + 7492;
        int mul2_div2_subs = ((add* 235)/47) - 498;
        int ans = abs((mul2_div2_subs % 100) / 10);
        cout<< ans <<endl;

    }
    return 0;
}
