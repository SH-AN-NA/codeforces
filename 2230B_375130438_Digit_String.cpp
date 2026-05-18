// Codeforces Problem: 2230B - Digit String
// Submission ID: 375130438
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 // ================== ⚡          ⚡ ==================
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
    string s;
    cin >> s;
    ll cnt = 0;
    ll available_13 = 0; 
        for (char c : s) 
    {
        if (c == '4') 
            cnt++;
                else if (c == '1' || c == '3') 
        {
                        available_13++;
        } 
        else if (c == '2') 
        {
            if (available_13 > 0) 
            {
                cnt++;
                available_13--;
                            }
        }
    }
        cout << cnt << "\n";
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
//13332222\/4rem
//123322