#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n][m];

    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin>>a[i][j];

    int max[m], sum[m];
    for(int i = 0; i<m; i++)
        max[i] = sum[i] = 0;

    for(int j = 0; j<m; j++)
        for(int i = 0; i<n; i++)
        {
            if(a[i][j]>max[j])
                max[j] = a[i][j];
            sum[j]+= a[i][j];
        }

    for(int i = 0; i<m; i++)
    {
        cout<<"The sum of column "<<i+1<<" : "<<sum[i]<<endl;
        cout<<"The largest element in column "<<i<<" : "<<max[i]<<endl<<endl;
    }
}
