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
    int T, N, second;
    int amountMile, amountJuice;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>N;
        amountMile=0;
        amountJuice=0;
        for(int j=1; j<=N; j++)
        {
            cin>>second;
            int temp=second;

            amountMile+=(second/30)*10+10;
            amountJuice+=(second/60)*15+15;

        }

        if(amountJuice==amountMile)
            cout<<"Case "<<i<<": Mile Juice "<<amountJuice<<endl;
        else if(amountJuice>amountMile)
            cout<<"Case "<<i<<": Mile "<<amountMile<<endl;
        else
            cout<<"Case "<<i<<": Juice "<<amountJuice<<endl;
    }
    close;
}
