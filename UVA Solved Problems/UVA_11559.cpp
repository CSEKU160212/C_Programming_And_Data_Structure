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
    long int N, B, H, W, p, a, totalCost=1500000;  // N=number of participant, B=Budged, H=no of hotels, W= the no of weeks

    while(scanf("%d%d%d%d", &N, &B, &H, &W)==4)
    {
        for(long int i=0; i<H; i++)
        {
            cin>>p;
            for(long int j=0; j<W; j++)
            {
                cin>>a;
                long int ans=0;
                if(a>=N)
                {
                    ans=p*N;
                    if(totalCost>ans)
                    totalCost=ans;
                }
            }

        }

        if(totalCost>B)
            cout<<"stay home"<<endl;
        else
            cout<<totalCost<<endl;

            totalCost=1500000;
    }
    close;
}
