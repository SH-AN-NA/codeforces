// Codeforces Problem: 2162A - Beautiful Average
// Submission ID: 366415660
// Language: C++23 (GCC 14-64, msys2)

// 800
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
         int n ;
        cin >> n ;
        // since l==r; max can be single eleemnt
         int x = 0 , mx = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x ;
            mx = max(x, mx);
        }
        cout << mx << endl;
     }
}