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
    string s1[11];
    int T, v[11];
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin>>s1[j]>>v[j];
        }
        int max=v[0];
        for(int k=1; k<10; k++)
        {
            if(v[k]>max)
                max=v[k];
        }
         cout<<"Case #"<<i<<":"<<endl;
        for(int l=0; l<10; l++)
        {
            if(v[l]==max)
            {
                cout<<s1[l]<<endl;
            }
        }

    }

    close;
}
