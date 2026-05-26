// Codeforces Problem: 2002B - Removals Game
// Submission ID: 376140080
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
    vector<int> a(n) , b(n) ;
     for(int &i :a ) cin >> i ;
    for(int &i : b) cin >> i ;
     if(a==b)
    {
        cout << "Bob \n" ;
        return; 
    }
    reverse(all(b)) ;
    if(a==b)
    {
        cout << "Bob \n" ;
        return; 
    }
    cout << "Alice \n" ;
        return ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}