#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the row number: ";
    cin>>n;

     for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        for(int k=1; k<=((i*2)-1); k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    for(int rows=1; rows<=n-1; rows++)
    {
        for(int noOfSpace=1; noOfSpace<=rows; noOfSpace++)
            cout<<" ";

        for(int noOfStar=((rows*2)-1); noOfStar<=(((n-1)*2)-1); noOfStar++)
            cout<<"*";

        cout<<endl;
    }
    return 0;
}

