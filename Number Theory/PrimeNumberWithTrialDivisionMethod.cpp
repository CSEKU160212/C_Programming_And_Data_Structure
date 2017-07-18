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

int isPrime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0 ||  n==1 || n==0)

            return 0;
    }
    return 1;
}

int CSEKU_160212
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i)==1)
            cout<<i<<" ";
    }
    cout<<endl;
    close;
}
