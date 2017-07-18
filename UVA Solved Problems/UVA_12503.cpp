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

    char a[30];
    int t,n,s,e,i,b[110];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&n);
            s=0;
            for(i=1;i<=n;i++)
            {
                scanf("%s",a);
                if(strcmp(a,"LEFT")==0)
                {
                    s-=1;
                    b[i]=-1;
                }
                else if(strcmp(a,"RIGHT")==0)
                {
                    s+=1;
                    b[i]=1;
                }
                else
                {
                    scanf("%s%d",a,&e);
                    s+=b[e];
                    b[i]=b[e];
                }
            }
            cout<<s<<endl;
        }
    }
    close;
}
