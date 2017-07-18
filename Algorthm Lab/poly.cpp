#include<bits/stdc++.h>

#define sc scanf
#define pf printf
#define ll long long int
#define pi 2*acos(0.0)
#define dl double
#define fl float
#define st string
#define close return 0
#define str string

using namespace std;

ll horner(int *a, int n, int x0, int  i)
{
    if(i==n)
    {
        return a[n];
    }
    else
    {
        return a[i]+x0*horner(a, n, x0, i+1);
    }
}

int main()
{
    int A[] = { 1, 9, 8, 2, 3};
    int n = sizeof(A)/sizeof(A[0])-1;

    // cout<<n;

    cout<<horner(A, n, 2, 0);


    close;
}

