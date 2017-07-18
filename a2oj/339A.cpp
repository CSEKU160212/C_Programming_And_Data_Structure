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
    string s;
    cin>>s;
    int len = s.length();
    int A[101];
    if(len!=1)
    {
        int k=0;
        for(int i=0; i<len ; i++)
        {
           if(s[i]!='+')
            {
                    A[k] = (int) s[i];
                    k++;
            }
        }
        sort(A, A+(len/2)+1);

        for(int i=0; i<(len/2)+1; i++)
        {
            cout<<(char)A[i];
            if(i!=(len/2))
                cout<<"+";
        }
        cout<<endl;
    }
    else
        cout<<s<<endl;
    close;
}

