#include <iostream>

using namespace std;

void mergefully(int a[],int f,int m,int l)
{
    int ar[l];
    int i,j,k;
    i=f;
    j=m+1;
    k=f;
    while(i<=m+1 && j<=l)
    {
        if(a[i]<=a[j])
        {
            ar[k]=a[i];
            i++;
        }
        else
        {
            ar[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>m)
        for(int b=j; b<=l; b++)
        {
            ar[k]=a[b];
            k++;
        }
    else
        for(int b=i; b<=m; b++)
        {
            ar[k]=a[b];
            k++;
        }
    for(int c=f;c<=l;c++)
        a[c]=ar[c];

        for(int b=f;b<=l;b++)
            cout<<ar[b]<<" ";
        cout<<"\n";
}

void mergesort(int a[],int i,int l)
{
    int mid;
    if(i<l)
    {
        mid=(i+l)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,l);
        mergefully(a,i,mid,l);
    }
}

int main()
{
    int i;
    cout<<"input the element number u want to invoke\n";
    cin>>i;
    int a[i];
    cout<<"enter the values\n";
    for(int j=0; j<i; j++)
        cin>>a[j];
    mergesort(a,0,i-1);
    cout<<"\nthe sorted array is\n";
    for(int j=0; j<i; j++)
        cout<<a[j]<<" ";
    return 0;
}
