// Codeforces Problem: 2102A - Dinner Time
// Submission ID: 366411959
// Language: C++23 (GCC 14-64, msys2)

// 900
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
         int n , m , p , q ;
        cin >> n >> m >> p >> q ;
         if(n%p != 0)
            cout << "YES" << endl;
         else if(n%p == 0 && (n/p)*q == m)
            cout << "YES" << endl;
         else cout << "NO" << endl;
      }
}