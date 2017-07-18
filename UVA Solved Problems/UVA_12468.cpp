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
    int a, b, clickForward, clickBackward;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;
        clickForward=max(a,b)-min(a,b);
        clickBackward=100-(max(a,b)-min(a,b));

        /* another process
            c=abs(a-b);
            if(c>50)
                c=100-c;
            cout<<c<<endl;
        */

        if(clickForward>=clickBackward)
            cout<<clickBackward<<endl;
        else
            cout<<clickForward<<endl;
    }
close;
}
