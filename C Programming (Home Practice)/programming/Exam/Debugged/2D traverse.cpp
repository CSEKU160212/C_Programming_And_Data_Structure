#include<iostream>
using namespace std;

int main()
{

    int m,n;

    scanf("%d%d",&m,&n);
    int a[m][n];
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            a[i][j]=0;
        }

    }
     for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";

    }
}
