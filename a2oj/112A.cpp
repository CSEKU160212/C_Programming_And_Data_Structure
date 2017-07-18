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
    char s1[101], s2[101];
    gets(s1);
    gets(s2);

    int equals=0;



    for(int i=0; i<strlen(s1); i++)
    {
        if(s1[i]>='A'&& s1[i]<='Z')
            s1[i]=s1[i]+32;

        if(s2[i]>='A'&& s2[i]<='Z')
            s2[i]= s2[i]+32;

        if(s1[i]<s2[i])
        {
            cout<<-1<<endl;
            equals=1;
            break;
        }
        else if(s1[i]>s2[i])
        {
            cout<<1<<endl;
            equals=1;
            break;
        }
        else
        {
            equals =0;
        }
    }

    if(equals==0)
    {
        cout<<0<<endl;
    }

    close;
}
