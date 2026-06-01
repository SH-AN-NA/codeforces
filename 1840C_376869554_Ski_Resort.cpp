// Codeforces Problem: 1840C - Ski Resort
// Submission ID: 376869554
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
    int n , k , c ;
    cin >> n >> k >> c ;
     vector<int> a(n) ;
     int seglen = 0 ;
    ll cnt = 0 ;
     for(int &i : a)
    {
        cin >> i ;
         if(i <= c)
        {
            seglen++ ;
        }
        else
        {
            if(seglen>=k)
                cnt += 1LL*(seglen - k + 1)*(seglen - k + 2)/ 2 ;
             seglen = 0 ;
        }
     }
    if(seglen>=k)
    cnt += 1LL*(seglen - k + 1)*(seglen - k + 2)/ 2 ;
        cout << cnt << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}