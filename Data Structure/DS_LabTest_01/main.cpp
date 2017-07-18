#include <bits/stdc++.h>

using namespace std;

int main()
{
    int R, C;
    cin>>R;
    cin>>C;
    int A[R][C];

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

     int oddnumber=0, evennumber=0;
      cout<<endl;
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++){

        if ( A[i][j]% 2 == 0)
        {
            A[i][j]= 0;
            evennumber++;
        }

         else
        {
            A[i][j]= 1;
            oddnumber++;
        }
    }
    }

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Odd: "<<oddnumber<<endl;
    cout<<"Even: "<<evennumber<<endl;






    return 0;
}
