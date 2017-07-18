#include <iostream>

using namespace std;



int main()
{
    int flag=0,b,ar[7]={2,7,9,11,15,23,56};
    for(int i=0;i<7;i++)
        cout<<ar[i]<<" ";
        cout<<"\n";
    cout<<"input the value to binary and linear search\n";
    cin>>b;
    for(int i=0;i<7;i++)
    if(ar[i]==b){
        flag=1;
        break;
    }
    if(flag==1)
        cout<<"FOUND!!!!";
    else
        cout<<"not found!!!";
    flag=0;
    cout<<"\nin binary search\n";
    int init=0,endin=6,mid;
    while(init<=endin){
        mid=(init+endin)/2;
        if(ar[mid]==b){
            flag=mid;
            break;
        }
        else if(ar[mid]>b)
            endin=mid-1;
        else
            init=mid+1;
    }
    if(flag!=0)
        cout<<"found in "<<flag<<" position";
    else
        cout<<"not found";
    return 0;
}
