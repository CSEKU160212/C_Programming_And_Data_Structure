#include<bits/stdc++.h>



#define CSEKU_160212 main()
#define sc scanf
#define pf printf
#define ll long long int
#define pi 2*acos(0.0)
#define dl double
#define fl float
#define st string
#define close return 0
#define str string
#define in cin
#define out cout

using namespace std;

int CSEKU_160212
{

    char a[101];
   cin>>a;
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower (a[i]);
        if (a[i] != 'a' && a[i] != 'o' && a[i] != 'u' && a[i] != 'e' && a[i] != 'y' && a[i] != 'i')
        {
           cout<<"."<< a[i];
        }
    }
    cout<<endl;
    close;
}
