// Codeforces Problem: 1373B - 01 Game
// Submission ID: 376005784
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
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
     int cnt = 0 ;
    for(char i : s)
    {
        if(i=='0')  cnt++ ;
    }
        cout << (min(cnt , (int)s.size()-cnt) % 2 ? "DA \n" : "NET \n") ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}