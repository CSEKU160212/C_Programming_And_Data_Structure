#include <bits/stdc++.h>

#define n 10
#define m 5

using namespace std;

int main()
{
    // data Storing.....

    int A[n];
    cout<<"Enter the value:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    // print the Array
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<endl<<endl;

    // marge two array
    int B[m] = {1, 2, 5, 8, 55};

    int X[m+n]; // new array

    for(int i=0; i<n; i++)
        X[i]= A[i];

    for(int i=0; i<n; i++)
        X[i+n]=B[i];

    cout<<"Updated Array: ";
    for(int i=0; i< m+n; i++)
        cout<<X[i]<<" ";

    cout<<endl<<endl;

    // searching data from array
    int val;
    cout<<"Enter the data to be searched: ";
    cin>>val;
    int found=0;
    int location=0;
    for(int i=0; i<n+m ; i++)
        if(val == X[i])
        {
            found=1;
            location= i+1;
            break;
        }
    if(found==1)
        cout<<"Value Found"<<endl<<endl;
    else
        cout<<"Value Not Found"<<endl<<endl;


    // Maximum & minimum
    int max=X[0], min=X[0];
    for(int i=1; i<n+m; i++)
    {
        if(max<X[i])
        {
            max=X[i];
        }
        if(min>X[i])
        {
            min=X[i];
        }
    }

    cout<<"Maximum Value= "<<max<<endl<<"Minimum Value= "<<min<<endl<<endl;

    // delete a value of n position

    cout<<"Enter the position to be deleted: ";
    int N;
    cin>>N;
    for(int i=N-1; i<n+m-1; i++)
    {
        X[i]=X[i+1];
    }

    cout<<"After deleted the array is: "<<endl;

    for(int i=0; i<n+m-1; i++)
        cout<<X[i]<<" ";


    return 0;
}
