#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int T;
    double r, cir, sq ;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>r;
        double pi=  2 * acos (0.0);
        sq= (2*r) *(2*r);
        cir= pi * r * r;
        printf("Case %d: %.2lf\n", i, sq-cir);
    }
    return 0;
}

