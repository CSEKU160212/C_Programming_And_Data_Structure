#include <iostream>

using namespace std;

int main()
{
    int i;
    cout<<"input the element number u want to invoke";
    cin>>i;
    int a[i];
    for(int j=0;j<i;j++)
        cin>>a[j];
    for(int j=0;j<i-1;j++)
    {
        int mini=j;
        for(int k=j+1;k<i;k++)
        {
            if(a[k]<a[mini])
                mini=k;
        }
        int temp=a[mini];
        a[mini]=a[j];
        a[j]=temp;
    }
    for(int j=0;j<i;j++)
        cout<<a[j]<<" ";
    return 0;
}
