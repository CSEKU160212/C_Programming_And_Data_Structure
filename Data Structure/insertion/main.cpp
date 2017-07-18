#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[11];
    for(int i=0; i<10; i++)
    {
        cin>>A[i];
    }

    for(int j=2; j<10; j++)
    {
        int key_value=A[j];

        int i=j-1;

        while(i>0 && A[i]>key_value)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key_value;
    }
    for(int i=0; i<10; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
