#include<bits/stdc++.h>

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

int main()
{
   int T, n, k, a;

   cin>>T;

   while(T--)
   {
       int minimumNoOfKids = 0;
       cin>>n>>k;
       while(n--)
       {
           cin>> a;
           minimumNoOfKids  += (a/k);
       }
       cout<<minimumNoOfKids<<endl;
   }

    close;
}

