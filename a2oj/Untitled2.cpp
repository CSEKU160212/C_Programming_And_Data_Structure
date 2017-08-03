#include<bits/stdc++.h>

using namespace std;

int dp[1005][1005];

int lcs(string s1, string s2, int m, int n)
{
    if(m == 0 || n == 0)
    {
        return 0;
    }
    if(dp[m][n]!= -1) return dp[m][n];

    if(s1[m-1] == s2[n-1])
    {
        return dp[m][n] = (1+lcs(s1,s2,m-1,n-1));
    }
    else
    {
        return dp[m][n] = max(lcs(s1,s2,m,n-1),lcs(s1,s2,m-1,n));
    }
}

int main()
{
    memset(dp, -1, sizeof(dp));
    string s1,s2;
    cin >> s1;
    s2 = "hello";
    int m = s1.length(), n = s2.length();
    int l = lcs(s1,s2,m,n);
    if(l == n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
