// Codeforces Problem: 1876A - Helmets in Night Light
// Submission ID: 376075619
// Language: C++23 (GCC 14-64, msys2)

//1000
#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: 1000
// Problem:https://codeforces.com/problemset/problem/1876/A
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n , p ;
    cin >> n >> p ;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i]; 
    for(int i = 0; i < n; i++) cin >> b[i]; 
     vector<pair<ll, ll>> v;
    for(int i = 0; i < n; i++) {
        v.push_back({b[i], a[i]}); 
    }
     sort(all(v)) ; // y,x
     // if x,y
    // sort(all(v), [](const pair<int, int>& a, const pair<int, int>& b) {
    //     return a.second < b.second; // Change '<' to '>' for descending order
    // });
     ll prevcnt = 1 , mincost = p;
     for(auto it : v)
    {
        ll currcnt = it.second ;//(a)
        ll sharecost = it.first ;// (b)
         if(sharecost >= p) break ;
         if(prevcnt + currcnt > n)
        {
            mincost += (n-prevcnt)*sharecost ;
            prevcnt = n ;
            break ;
        }
        else 
        {
            mincost += currcnt * sharecost ;
            prevcnt += currcnt ;
        }
    }
    mincost += (n-prevcnt)*p ;
    cout << mincost << '\n' ;
        }
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}