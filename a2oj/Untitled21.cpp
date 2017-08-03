#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2="hello";
    int i, j;
    int flag=1;
    cin>>s1;
    for(int i=0; i<s1.length(); i++)
    {
        for(j=0; j<5;)
        {
            if(s2[j]==s1[i])
            {
                flag++;
                j++;
            }
        }
        if(flag==5)
            break;
    }

    if(flag==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
