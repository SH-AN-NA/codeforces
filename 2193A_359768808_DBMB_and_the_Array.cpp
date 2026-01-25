// Codeforces Problem: 2193A - DBMB and the Array
// Submission ID: 359768808
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      int t;
    cin >> t;
    while(t--)
    {
        int n,s,x;
        cin >> n >> s >> x;
        vector<int>a(n);
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ;
        if(((s - sum) % x ==0) && (s - sum)>=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
            }
}