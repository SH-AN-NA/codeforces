// Codeforces Problem: 1913B - Swap and Delete
// Submission ID: 376070392
// Language: C++23 (GCC 14-64, msys2)

//1000
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
    string s ; cin >> s ;
    int cnt0 = 0 , cnt1 = 0 ;
    for(char c : s ) 
        if(c=='0') cnt0++ ;
        else cnt1++ ;
     int t = 0 ;
    for(char c : s )
        if(c=='0' && cnt1>0)
        {
            cnt1-- ;
            t++ ;
        }
        else if(c=='1' && cnt0>0)
        {
            cnt0-- ;
            t++ ;
        }
        else break ;
     cout << s.size() - t << '\n';
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}