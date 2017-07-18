#include <iostream>
using namespace std;

int main()
{
    int a[3][3][3];
    for(int i = 0, num = 1; i<3; i++)
        for(int j = 0; j<3; j++)
            for(int k = 0; k<3; k++, num++)
                a[i][j][k] = num;
    for(int i = 0, num = 1; i<3; i++)
        for(int j = 0; j<3; j++)
        {
            for(int k = 0; k<3; k++, num++)
            {
                cout<<a[i][j][k]<<" ";
            }
            cout<<"\n";
        }




}
