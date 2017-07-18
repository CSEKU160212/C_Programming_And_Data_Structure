#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=3;
    for(int i=0; i<n; i++)
    {
         for(int k=0; k<i; k++)
            printf(". ");

        for(int j=n; j>i; j--)
        {
            printf("* ");
        }
            cout<<endl;
    }
    return 0;
}
