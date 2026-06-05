// Codeforces Problem: 1614B - Divan and a New Project 
// Submission ID: 377393653
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Divan_and_a_New_Project
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
 void solve() {
    int n ; cin >> n ;
    vector<pair<int, int>> a(n);
     for (int i = 0; i < n; i++) 
    {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }
    sort(rall(a)); // reverse
     vector<int> ans(n+1,0) ;
    ans[0] = 0 ;
     int curr = 1 ;
    ll dist = 0 ;
     for(int i = 0 ; i < n ; i++)
    {
        int idx = a[i].second , visit = a[i].first ;
         if(i%2==0)  ans[idx] = curr ;
        else    
        {   
            ans[idx] = -curr ;
            curr++ ;
        }
        dist += 2LL * visit * abs(ans[idx]) ;
     }
    cout << dist << '\n' ;
    vecOutput(ans) 
      cout << '\n' ;
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