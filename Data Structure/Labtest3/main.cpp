#include <iostream>
using namespace std;

int main()
{
    int A[100]= {1,4,6,8,2,1,3,2,3,5};
    int j, count, i,k, flag;

    for(i=0; i<10; i++)
    {

            count=0;
            if(A[i]!=-1){
            for(j=0; j<10; j++)
            {
                if(A[i]== A[j])
                {
                    count++;
                    A[j]=-1;
                }

            }
            cout<<A[i]<<": "<<count<<endl;
            }
    }
    return 0;
}
