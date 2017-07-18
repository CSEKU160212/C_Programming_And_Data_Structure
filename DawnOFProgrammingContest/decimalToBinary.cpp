#include<bits/stdc++.h>
#include<cstring>
#include<string>

using namespace std;


int blist[10000];
void decimalToBinary(int n)
{
    int i=0;

    while(n>0)
    {
        int rem =n%2;
        blist[i]= rem;
        n=n/2;
        i++;
    }

    blist[i]=2;
    int len=0;

    for(int j=0; blist[j]!=2; j++)
        len++;

        cout<<"Binary: ";
    for(int k=len-1; k>=0; k--)
        cout<<blist[k]<<" ";

}

int main()
{
    int n;
    cin>>n;

    decimalToBinary(n);

    return 0;
}
