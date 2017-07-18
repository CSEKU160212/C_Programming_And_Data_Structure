#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s;
    long int count=0;
    while(getline(cin, s))
    {
        for(long int i=0; s[i]; i++)
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
