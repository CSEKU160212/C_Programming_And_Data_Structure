#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases=0;
    string s;
    while(getline(cin, s))
    {
        cases++;
        if(s=="#")
            break;

         else if(s=="HELLO")
        cout<<"Case "<<cases<<": ENGLISH"<<endl;
        else if(s=="HOLA")
        cout<<"Case "<<cases<<": SPANISH"<<endl;
        else if(s=="HALLO")
        cout<<"Case "<<cases<<": GERMAN"<<endl;
        else if(s=="BONJOUR")
        cout<<"Case "<<cases<<": FRENCH"<<endl;
        else if(s=="CIAO")
        cout<<"Case "<<cases<<": ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE")
        cout<<"Case "<<cases<<": RUSSIAN"<<endl;
        else
            cout<<"Case "<<cases<<": UNKNOWN"<<endl;

    }
    return 0;
}
