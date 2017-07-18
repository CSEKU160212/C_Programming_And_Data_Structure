#include<bits/stdc++.h>
#include<cmath>

using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int T;
    double r;

    cin>>T;
    for(int i=1; i<=T; i++)
    {
      cin>>r;
      printf("Case %d: %.2lf\n",i, (4*pow(r,2))- (pi*pow(r,2)));
    }
    return 0;
}
