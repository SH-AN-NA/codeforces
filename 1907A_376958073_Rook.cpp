// Codeforces Problem: 1907A - Rook
// Submission ID: 376958073
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round 800
// Problem: Problem Name
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    string s ; cin >> s ;
     for(int i = 1 ; i < 9; i++)
    {
        if(i != (s[1]-'0'))
            cout << s[0] << i << '\n' ;
    }
     for(int i = 0 ; i < 8  ; i++)
    {
        if( char('a' + i) != s[0])
            cout << char('a' + i) << s[1] << '\n' ;
    }
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}