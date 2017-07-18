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

int  n, t;
cin>>n>>t;
char s[n];
cin>>s;

for(int i=0; i<t; i++)
{
    for(int j=0; j<n-1;)
    {
       if(s[j] == 'B' && s[j+1]=='G')
        {
            swap(s[j],s[j+1]);
            j+=2;
        }
        else
            j++;
    }
}
cout<<s<<endl;

    close;
}
