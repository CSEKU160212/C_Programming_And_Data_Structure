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

int x;

int BigMod(int a, int b, int M)
{
    if(b==0)
        return 1%M;
    x = BigMod(a, b/2, M);
    x=(x*x) % M;
    if(b%2==1)
        x=(x*a)%M;

    return x;
}


int CSEKU_160212
{
    int a, b, M;

    while(cin>>a>>b>>M)
    {
        x=0;
        cout<<BigMod(a, b, M)<<endl<<endl;
    }
    close;
}
