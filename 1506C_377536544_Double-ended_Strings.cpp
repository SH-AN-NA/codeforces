// Codeforces Problem: 1506C - Double-ended Strings
// Submission ID: 377536544
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: C_Double_ended_Strings
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
    string a , b ;
    cin >> a >> b ;
     int len = 0 , n = a.size()  ;
     for(int i = 0 ; i < n ; i++)
    {
        for(int l = 1 ; i + l <= n ; l++)
        {
            string sub = a.substr(i,l) ;
             if(b.find(sub) != string::npos)
                len = max(len,l) ;
        }
    }
    cout << n + b.length() - 2*len << '\n' ;
}
// void solve() {
//     string a , b ;
//     cin >> a >> b ;
 //     int len = 0 , n = a.size() , m = b.size() ;
 //     for(int l = 1 ; l <= min(m,n) ; l++)
//     {
//         for(int i = 0 ; i + l <= n ; i++)
//         {
//             for(int j = 0 ; j + l <= m ; j++)
//             {
//                 string suba = a.substr(i,l) ;
//                 string subb = b.substr(j,l) ;
 //                 if(suba == subb)
//                     len = max(len,l) ;
//             }
//         }
//     }
//     cout << n + m - 2*len << '\n' ;
// }
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
 // s.substr(starting pt , len)
// gets a substring a length len from pt to pt+len