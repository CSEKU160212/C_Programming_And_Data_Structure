#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int isPrime(int n)
{
    int flag=0;
    for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            flag=1;
        }
    if(flag==0)
        return 1;
    else
        return 0;

}

int main()
{
    int n, k, f;
    cin>>k;
    while(k--)
    {
        int temp=2;
        cin>>n;
        int l=0;
        while(l!=n){
        f=isPrime(temp);
        if(f==1)
            l++;
        temp++;
        }
        cout<<--temp<<endl;
    }

    return 0;
}
