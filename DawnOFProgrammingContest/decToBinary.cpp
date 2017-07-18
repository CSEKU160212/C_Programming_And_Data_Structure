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
    int dec;
    int j, k;
    int bi[1001];
    int ci[1001];

    cin>>dec;
    int i=0, len=0;
    while(dec/2!=0)
    {
        bi[i]=dec%2;
        i++;
        dec/=2;
        len++;
    }
    bi[i]=dec;

    for(j=len, k=0; j>=0; j--, k++)
    {
        ci[k]=bi[j];
    }

    for(k=0; k<=len; k++)
    {
        cout<<ci[k];
    }


    close;
}
