#include <iostream>

using namespace std;

int main()
{
    int i;
    cout<<"input the element number u want to invoke";
    cin>>i;
    int a[i];
    for(int j=0; j<i; j++)
        cin>>a[j];
    for(int j=1; j<=i; j++)
    {
        for(int k=0; k<i-j; k++)
            if(a[k]>a[k+1])
            {
                int temp=a[k+1];
                a[k+1]=a[k];
                a[k]=temp;
            }
    }
    for(int j=0; j<i; j++)
        cout<<a[j]<<" ";
    return 0;
}
