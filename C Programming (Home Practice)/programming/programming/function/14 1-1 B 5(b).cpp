#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    int max = a[0];
    for(int i = 1; i<n; i++)
        if(a[i]> max) max = a[i];

    int frequency[max + 1];
    for(int i =0; i<=max; i++) frequency[i] = 0;

    for(int i = 0; i<n; i++)
        frequency[a[i]]++;

    cout<<"Element\t\tFrequency"<<endl;

    for(int i = 0; i<=max; i++)
        if(frequency[i])
            cout<<i<<"\t\t"<<frequency[i]<<endl;
}
