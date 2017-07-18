#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int x,sum=0;
    for(int i=1;i<=10;i++)
    {
        fin>>x;
        sum+=x;
    }
    fout<<sum<<"\n";
    fin.close();
    fout.close();

}
