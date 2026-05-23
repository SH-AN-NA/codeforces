// Codeforces Problem: 2229C1 - We Be Flipping (Easy Version)
// Submission ID: 375814940
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
    for(ll &i : a)
        cin >> i ;
     vector<ll>idxs ;
    bool negaa = true ;
      for(int i = n-1 ; i >= 0 ; i--)
    {
        ll curr = negaa ? a[i] : -a[i];
         if (curr > 0) 
        {
            idxs.push_back(i + 1); 
            negaa = !negaa ;    
        }
     }
    cout << idxs.size() << "\n";
     for(int i = 0; i < idxs.size(); i++) 
        cout << idxs[i] << " ";
     cout << "\n";    
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}