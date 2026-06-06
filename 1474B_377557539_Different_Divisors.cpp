// Codeforces Problem: 1474B - Different Divisors
// Submission ID: 377557539
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Different_Divisors
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
 int maxi = 40000 ; //d<=max
vector<bool>isprime(maxi+1,1) ;
vector<int>prime ;
 void seive() {
    for(int i = 2 ; i * i <= maxi ; i++)
    {
        isprime[0] = isprime[1] = 0 ;
        if(isprime[i])
        {
            for(int p = i*i ; p <= maxi ; p += i)
                isprime[p] = false ;
        }
    }
     for(int i = 2 ; i <= maxi ; i++)
    {
        if(isprime[i])
            prime.push_back(i) ;
    }
}
 void solve() {
    int d ; cin >> d ;
    int p = *lower_bound(all(prime),1+d) ;
    int q = *lower_bound(all(prime),p+d) ;
     ll sol = 1LL*p*q ;                  
    cout << sol << '\n' ;
    }
 int main() {
    fast;
    seive() ;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}