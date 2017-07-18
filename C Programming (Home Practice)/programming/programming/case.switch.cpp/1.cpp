#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;

    switch(ch)
    {
    case 'a':
    case 'A':
        cout<<"a is in ashar"<<endl;
        break;
    case 'b':
    case 'B':
        cout<<"b is in brain"<<endl;
        break;
    default:
        cout<<"u dnt know alphabets. !!"<<endl;
    }
}
