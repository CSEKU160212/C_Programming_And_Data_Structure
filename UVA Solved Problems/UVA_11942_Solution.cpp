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
    int N, height[11];
    cin>>N;
    cout<<"Lumberjacks:"<<endl;
    while(N--)
    {
        for(int i=0; i<10; i++)
            cin>>height[i];

        int flag=0;
        if(height[0]>height[1])
        {
            for(int j=1; j<9; j++)
            {
                if(height[j]<height[j+1])
                    flag=1;
            }
        }
        else
        {
            for(int j=1; j<9; j++)
            {
                if(height[j]>height[j+1])
                    flag=1;
            }
        }

        if(flag==1)
            cout<<"Unordered"<<endl;
        else
            cout<<"Ordered"<<endl;
    }
    close;
}
