#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int no=0, n2;
    int temp=1;
    while(no!=n)
    {
        int reverse=0;
        n2=temp;
        while (temp != 0)
        {
            reverse = reverse * 10;
            reverse = reverse + temp%10;
            temp    = temp/10;
        }

        if(reverse==n2)
            no++;
        temp=n2;
        temp++;
    }
    cout<<n2;
    return 0;
}
