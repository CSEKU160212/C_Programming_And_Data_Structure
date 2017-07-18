#include <iostream>
using namespace std;

int sum(int array[][3], int i, int j, int endi, int endj)
{
    int sum = 0;
    for(int m = i; m<=endi; m++)
    {
        for(int n = j; n<=endj; n++)
        {
            sum += array[m][n];
        }
    }

    return sum;
}

int main()
{
    int array[3][3];
    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++)
            cin>>array[i][j];

    cout<<sum(array, 0, 0, 2, 2)<<endl;
}
