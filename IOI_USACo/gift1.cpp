/*
ID: cseku161
PROG: gift1
LANG: C++
*/

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int NP;
    string s[15], sender, receiverName[15];
    int initialMoney[15], tk, sendN;

    cin>>NP;
    int i=0;
    int temp=NP, temp3=NP;
    while(NP--)
    {
        cin>>s[i];
        initialMoney[i]=0;
        i++;
    }

    for(int l=0; l<temp3; )
    {
        cin>>sender>>tk>>sendN;
        int j=0;
        int temp2=sendN;
        if(sendN==0)
        {
            goto pp;
        }

        while(sendN--)
        {
            cin>>receiverName[j];
            j++;
        }

        for(int j=0; j<temp; j++)
        {
            if(sender == s[j])
            {
                initialMoney[j] -= tk;
                initialMoney[j]+= (tk%temp2);

            }
        }
        for(int k=0; k<temp2; k++)
        {
            for(int j=0; j<temp; j++)
            {
                if(receiverName[k] == s[j])
                {
                    initialMoney[j] += tk/temp2;

                }
            }
        }
pp:

        l++;
    }
    int m=0;
    while(temp--)
    {
        cout<<s[m]<<" "<<initialMoney[m]<<endl;
        m++;
    }
    return 0;
}
