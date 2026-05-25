// Codeforces Problem: 1380A - Three Indices
// Submission ID: 376004690
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
     for(int &i : a)
        cin >> i ;
     for(int i = 1 ; i < n - 1 ; i++)
    {
        if(a[i-1]<a[i] && a[i]>a[i+1])
        {
            cout << "YES" <<'\n' ;
            cout << i << " " << i+1 << " " << i+2 << '\n' ;
            return ; 
        }
     }
    cout << "NO" << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}