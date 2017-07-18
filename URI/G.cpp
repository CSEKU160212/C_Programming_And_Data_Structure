#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
   int T, x1, x2, y1, y2, M, x, y;
   cin>>T;
   for(int i=1; i<=T; i++)
   {
       cin>>x1;
       cin>>y1;
       cin>>x2;
       cin>>y2;
       cin>>M;
       printf("Case %d:\n", i);
       for(int j=1; j<=M; j++)
       {
           cin>>x;
           cin>>y;
           if(x>x1 && x<x2 && y>y1 && y<y2)
            cout<<"Yes\n";
         else
            cout<<"No\n";
       }
   }
   return 0;
}
