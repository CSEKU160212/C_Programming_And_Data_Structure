#include<bits/stdc++.h>
#include<cstring>
#include<string>

using namespace std;

int totalSum(string s)
{
    int sum=0;
    for(int i=0; i<s.length(); i++)
        {
            if(isupper(s[i]))
                sum+=s[i]-64;
            else if(islower(s[i]))
                sum+=s[i]-96;
        }

        return sum;
}

int toOneDigit(int val)
{
    if(val>=0 && val<10)
        return val;
    else
    {
        int temp=0;
        while(val!= 0)
        {
            temp=temp+val%10;
            val=val/10;
        }

        toOneDigit(temp);
    }
}


int main()
{
    string s1, s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int sumS1=totalSum(s1);
        int sumS2=totalSum(s2);

       double oneDigS1=(double)toOneDigit(sumS1);
        double oneDigS2=(double)toOneDigit(sumS2);

       if(oneDigS1/oneDigS2 >1)
       {
           printf("%.2lf %c\n",(oneDigS2/oneDigS1)*100, '%');
       }
       else
       {
           printf("%.2lf %c\n",(oneDigS1/oneDigS2)*100, '%');

       }
    }
    return 0;
}
