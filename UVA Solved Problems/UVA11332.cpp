#include<bits/stdc++.h>

using namespace std;

int sum;
int fn(int val)
{
    sum=0;
    if(val>0 && val<10)
        return val;
    else
    {
        while(val!=0)
        {
            sum+=val%10;
            val=val/10;
        }

        fn(sum);
    }
}

int main()
{
    int n;
    while(cin>>n && n!=0)
    {

       if(n<10 && n>0)
            cout<<n<<endl;
       else
       {
           cout<<fn(n)<<endl;
       }
    }
    return 0;
}
