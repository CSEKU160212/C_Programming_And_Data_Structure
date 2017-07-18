#include<bits/stdc++.h>
using namespace std;
int GCD(int i, int j)
{
    int temp;
    while(j%i!=0)
    {
        temp=j%i;
        j=i;
        i=temp;
    }
    return i;
}
int main()
{
    int N;
    while(cin>>N){
            if(N==0)
            break;
    int G=0;
    for(int i=1; i<N; i++)
        for(int j=i+1; j<=N; j++)
        {
            G+=GCD(i,j);
        }
    cout<<G<<endl;
    }
    return 0;
}
