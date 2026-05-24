// Codeforces Problem: 1582B - Luntik and Subsequences
// Submission ID: 375957436
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
    vector<ll> a(n) ;
     int cnt1 = 0 , cnt0 = 0 ;
        for(ll &i : a)
    {
        cin >> i ;
        if(i==1)
            cnt1++ ;
        if(i==0)
            cnt0++ ;
    }
    //cnt1p1*2^cnt0
    cout << (1LL<<cnt0)*(ll)cnt1 <<'\n' ;
    // cnt1 cases were excluding each1
    // then selecting cnt2 as nc0 + nc1 +nc2
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}