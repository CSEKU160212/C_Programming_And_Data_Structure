#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n=3;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }

        for(int k=n-1; k>i; k--)
        {
            printf(". ");
        }

        cout<<endl;
    }
    return 0;
}
