#include <iostream>

using namespace std;

int main()
{
    int i;
    cout<<"input the element number u want to invoke";
    cin>>i;
    int a[i];
    for(int j=1; j<=i; j++)
        cin>>a[j];
    for(int j=2; j<=i; j++)
    {
        int k=j-1;
        int key=a[j];
        while(k>0 && a[k]>key)
        {
            a[k+1]=a[k];
            k=k-1;
        }
        a[k+1]=key;
    }
    for(int j=1; j<=i; j++)
        cout<<a[j];
    return 0;
}
