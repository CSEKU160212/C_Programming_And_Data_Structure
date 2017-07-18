/*
ID: cseku161
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int p1=1, p2=1;

    ifstream fin ("ride.in");
    ofstream fout ("ride.out");
    string comet, group;
    fin >> comet >> group;

    int i=0;
    while(comet[i]!='\0')
    {
        int a= comet[i]-64;
        p1*=a;
        i++;
    }

    int j=0;
    while(group[j]!='\0')
    {
        int a= group[j]-64;
        p2*=a;
        j++;
    }

    if((p1%47)== (p2%47))
        fout<<"GO"<<endl;

    else
        fout<<"STAY"<<endl;

    return 0;
}
