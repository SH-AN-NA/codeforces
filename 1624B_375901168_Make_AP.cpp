// Codeforces Problem: 1624B - Make AP
// Submission ID: 375901168
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
    int a , b , c ;
    cin >>a >> b >> c ;
      if(((2*b-c)%a == 0 && (2*b-c > 0)) ||((2*b-a)%c == 0 && (2*b-a > 0)) || ((c+a)%(2*b) == 0))
        cout << "YES\n" ;
      else cout << "NO\n" ;
}
// a , b ,c 
// a+c = 2b 
// ma + c = 2b or a +mc = 2b or a + c = 2mb
// a or c same parity
  int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}