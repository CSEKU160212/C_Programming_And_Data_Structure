#include <bits/stdc++.h>

using namespace std;

int twinArrays(vector <int> ar1, vector <int> ar2)
{
    int minA = ar1[0], indexA;
    for (int i=1; ar1[i]!='\0'; i++)
    {
        if (ar1[i] < minA)
        {
            minA = ar1[i];
            indexA = i;
        }
    }
    int minB = ar2[0], indexB;
    for (int i=1; ar2[i]!='\0'; i++)
    {
        if (ar2[i] < minB)
        {
            minB = ar2[i];
            indexB = i;
        }
    }

    if (indexA != indexB)
        return (minA + minB);

    int minA2 = INT_MAX, indexA2;
    for (int i=0; ar1[i]!='\0'; i++)
    {
        if (i != indexA && ar1[i] < minA2)
        {
            minA2 = ar1[i];
            indexA2 = i;
        }
    }

    int minB2 = INT_MAX, indexB2;
    for (int i=0; ar2[i]!='\0'; i++)
    {
        if (i != indexB && ar2[i] < minB2)
        {
            minB2 = ar2[i];
            indexB2 = i;
        }
    }

    return min(minB + minA2, minA + minB2);
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++)
    {
        cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++)
    {
        cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2);
    cout << result << endl;
    return 0;
}
