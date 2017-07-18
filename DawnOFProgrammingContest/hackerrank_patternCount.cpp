#include <bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

int patternCount(string s){
  int res = 0;
   for (int i=0; s[i] !='\0'; i++)
   {
        if (s[i] == '1')
        {
            for (int j=i+1; s[j] !='\0'; j++)
               if (s[j] == '1')
                  res++;
        }
   }
   return res;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = patternCount(s);
        cout << result << endl;
    }
    return 0;
}
