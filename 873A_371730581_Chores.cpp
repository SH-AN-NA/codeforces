// Codeforces Problem: 873A - Chores
// Submission ID: 371730581
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
    int n , k , x ;
    cin >> n >> k >> x ;
    vector<int> a(n);
    for(int &i : a)
        cin >> i ;
     sort(all(a));
    int sum = 0 ;
    for(int i = n-1 ; i>= 0 ; i--)
    {
        if(k>0)
        {
            sum += x ;
            k-- ;
        } 
        else sum += a[i] ;   
     }
    cout << sum << '\n' ;
 }
 int main() {
    fast;
     solve();
    return 0;
}