// Codeforces Problem: 1471A - Strange Partition
// Submission ID: 369258924
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
using namespace std ; 
typedef long long ll ;
 void solve()
{
    ll n , x ;
    cin >> n >> x ;
     vector<ll> a(n) ;
    vector<ll> sump(n-1) ;
    ll sol1 = 0 ;
    ll sol2 = 0 ;
     for(ll &i : a)
    {
        cin >> i ;
        sol1 += i / x + (i % x == 0 ? 0 : 1) ;
        sol2 += i ;
      }
     if(n == 1)
    {
        ll ans = (a[0] + x - 1) / x;
        cout << ans << " " << ans << endl;
        return;
    }
         sol2 = sol2 /x + (sol2 % x == 0 ? 0 : 1) ;
    cout << sol2  << " " << sol1 << endl ;
    }
  int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        solve();
    } 
}
 