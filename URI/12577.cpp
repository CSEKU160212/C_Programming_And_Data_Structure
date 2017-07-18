#include<bits/stdc++.h>

using namespace std;
int main()
{
    char s[10];
    int cases=1;
    while(1){

    scanf("%s", s);

    if(s[0]=='*')
        break;
    else if(s[0]=='H')

                cout<<"Case "<<cases<<": Hajj-e-Akbar\n";
    else
                cout<<"Case "<<cases<<": Hajj-e-Asghar\n";
    cases++;
    }
    return 0;
}
