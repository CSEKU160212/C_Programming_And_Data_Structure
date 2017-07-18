#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s))
    {
        long int count=0;
       // long int len=strlen(s);
        for(long int i=0; i<strlen(s); i++)
        {
            if(s[i]=='"')
            {
                count++;
                if (count%2==1)
                    cout<<"``";
                else
                    cout<<"''";
            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

