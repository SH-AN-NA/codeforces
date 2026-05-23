// Codeforces Problem: 2229A - Slimes on a Line
// Submission ID: 375781534
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
    int n ; cin >> n ;
    vector<int> a(n) ;
    int maxi = 0 ;
    int mini = 1e9 ;
    for(int &i : a)
    {
        cin >> i ;
        maxi = max(maxi,i) ;
        mini = min(mini,i) ;
    }
    cout << ((maxi-mini + 1)/2) <<'\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}