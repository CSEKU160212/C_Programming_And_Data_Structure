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

int marks[1000002], prime[300000], nPrimes;

void isPrime(int n)
{
    int limit= sqrt(n* 1.)+2;

    for(int i=2; i<n; i+=2)
    {
        marks[i]=1;
    }

    prime[nPrimes++]=2;

    for(int i=3; i<n; i+=2)
    {
        if(!marks[i])
        {
            prime[nPrimes++]=i;

            if(i<=limit)
            {
                for(int j=i*i; j<n; j=i*2)
                {
                    marks[i]=1;
                }
            }
        }

    }

}

int CSEKU_160212
{
    int n=100;
    isPrime(n);
    for(int i=0; prime[i]!='\0'; i++)
        cout<<prime[i]<<" "<<endl;
    close;
}
