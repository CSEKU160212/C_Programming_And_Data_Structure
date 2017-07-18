#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum=0;
    while(scanf("%d", &n)!= EOF){
    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++) // solve in the book is wrong..
            sum+=j;

    cout<<sum<<endl;
    }
    return 0;
}
