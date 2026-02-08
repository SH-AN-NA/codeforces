// Codeforces Problem: 1475A - Odd Divisor
// Submission ID: 362037535
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
   {
        ll n ;
        cin >> n;
         if((n & (n-1))==0)
            cout << "NO" << endl;
                 else 
            cout << "YES" << endl;
    }
}