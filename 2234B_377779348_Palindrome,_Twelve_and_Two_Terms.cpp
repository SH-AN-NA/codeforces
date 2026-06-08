// Codeforces Problem: 2234B - Palindrome, Twelve and Two Terms
// Submission ID: 377779348
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Palindrome_Twelve_and_Two_Terms
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 bool palin(ll num)
{
    string s = to_string(num) ;
    int l = 0 , r = s.size() - 1 ;
    while(l<=r)
    {
        if(s[l]!=s[r]) 
            return false ;
         l++ ;
        r-- ;
    }
    return true ;
}
 void solve() {
    ll n ; cin >> n ;
     if(n%12==0)
    {
        cout << 0 << " " << n << '\n' ; 
    }
    else if (palin(n))
        cout << n << " " << 0 << '\n' ;
     else
    {
        ll bnew = (n/12)*12 ;
        ll it = 0 ;
        for(ll b = bnew; b >= 0 && b >= bnew - 12LL * 1000; b -= 12)
        {
            ll a = n - b ;
            if(palin(a))
            {
                cout << a << " " << b << '\n';
                return;
            }
            if(it>1e5)
                break;
            it++ ;
        }
        cout << -1 << '\n' ;
    }
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}