// Codeforces Problem: 1794B - Not Dividing
// Submission ID: 365427366
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
         vector<int> a(n);
        for(int &i : a)
            cin >> i;
         for(int i = 0; i < n; i++)
            if(a[i] == 1) a[i] = 2;
         for(int i = 0; i < n-1; i++)
        {
                    while(a[i+1] % a[i] == 0)
                a[i+1]++;
        }
         for(int i : a)
            cout << i << " ";
         cout << endl;
    }
}