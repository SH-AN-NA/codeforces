// Codeforces Problem: 1691B - Shoe Shuffling
// Submission ID: 377230449
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Shoe_Shuffling
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
#define NO cout << "-1" << '\n';
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n ; cin >> n ;
     vector<int> a(n) ;
    map<int,int> freq ;
     for(auto &i : a)
    {
        cin >> i ;
        freq[i]++ ;
    } 
     bool flag = true ;
     for(auto it : freq)
        if(it.second==1)
        {
            NO
            flag = false ;
            break ; 
        }
     if(flag)
    {
        vector<int> sol(n);
        for(int i = 0 ; i < n ; i++)
            sol[i] = i+1 ;
         int l = 0, r = 0;
  while (r < n) 
  {
   if (a[l] == a[r])
    r++;
   else
   {
    rotate(sol.begin() + l, sol.begin() + l + 1, sol.begin() + r);
    l = r;
   }
  }
        rotate(sol.begin() + l, sol.begin() + l + 1, sol.begin() + r);
        vecOutput(sol)
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
  // 1 1 1 6 6 8 8 9 9 9 
// 2 3 1 5 4