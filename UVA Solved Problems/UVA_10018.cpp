#include<bits/stdc++.h>

using namespace std;


int isPal(long long int n)
{
    long long int temp=n;
    long long int reverse=0;
    while(temp!=0)
    {
         reverse=reverse*10;
        reverse=reverse+temp%10;
        temp=temp/10;
    }
    if (n == reverse)
        return 1;
    else
        return 0;
}

int pal(long long int n)
{
    long long temp=n;
    long long int reverse=0;
    while(temp!=0)
    {
        reverse=reverse*10;
        reverse=reverse+temp%10;
        temp=temp/10;
    }
    return reverse;
}

int main()
{
    long long int N, p, count;
    cin>>N;
    while(N--)
    {
        count=0;
        long long int sum=0;
        cin>>p;
        sum=p+pal(p);
        if(isPal(sum)==1)
             cout<<++count<<" "<<sum<<endl;
        else
        {
            while(isPal(sum)!=1)
            {
                p=sum;
                sum=p+pal(p);
                count++;
            }
            cout<<++count<<" "<<sum<<endl;
        }



    }
    return 0;
}
