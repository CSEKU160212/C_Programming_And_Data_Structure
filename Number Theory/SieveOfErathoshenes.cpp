/*
Author: Md Abdul Lotif
Student Id: 160212
Batch: One Six
Discipline: Computer Science & Engineering
Institute: Khulna University, Khulna, Bangladesh
Hometown: Shahjadpur, Sirajganj
*/

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<cstring>
#include<deque>
#include<list>
#include<set>
#include<map>


#define CSEKU_160212 main()
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

int CSEKU_160212
{
    int n;
    cin>>n;
    int Arr[n];
    int Primes[n+1];
    for(int i=0; i<=n;i++)
    {
        if(i == 0 || i==1)
            Primes[i] = 0;
        else
            Primes[i] =1;
    }

    for(int i=2; i<=sqrt(n); i++)
    {
        if(Primes[i]==1)
        {
            for(int j=2; i*j<=n; j++)
            {
                Primes[i*j] = 0;
            }
        }
    }
        for(int i=0; i<=n; i++)
        {
            if(Primes[i]==1)
                    cout<<i<<" ";

        }
        cout<<endl;

    close;
}
