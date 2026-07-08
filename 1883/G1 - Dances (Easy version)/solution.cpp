#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest name
// Problem: G_1_Dances_Easy_version
// Rating: Rating
// =============================================================
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
// Loops (0-n), (n-0), (1-n), (n-1)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define for0(i, n) for(int i = 0; i < n; ++i)          // 0 to n-1
#define forn(i, n) for(int i = n; i >= 0; --i)         // n down to 0
#define for1(i, n) for(int i = 1; i <= n; ++i)         // 1 to n
#define for1n(i, n) for(int i = n; i >= 1; --i)        // n down to 1
 
// Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '
';
 
// Fast I/O Helpers
#define YES cout << "YES" << '
';
#define nO cout << "nO" << '
';
 
// Debugger (Runs locally with -DLOCAL flag)
#ifdef LOCAL
#define deb(x) cerr << #x << " = " << x << endl;
#else
#define deb(x)
#endif
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
// Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
 
void solve() {
    ll n , m ;
    cin >> n >> m ;
 
    vector<ll> a(n,1) , b(n) , mk(n,0) ;
 
    for1(i,n-1)
        cin >> a[i] ;
 
    for0(i,n) {
        cin >> b[i] ;
    }
 
    sort(all(a)) ;
    sort(all(b)) ;
 
	int i = 1 , j = 0 ;
	while (i < n && j < n) {
		if (a[i] < b[j]) { 
			mk[j] = 1 ;
			i++ , j++ ;
		}
		else
			j++;
	}
 
	vector<ll> v ;
 
	for0(i,n)
		if (mk[i]==0)
			v.pb(b[i]) ;
		
	
	ll mx = v.back() ;
//	cout<<mx<<endl;
	ll inia = n - i + 1 ;
//	cout<<inia<<endl;
 
	ll ans = inia*m - min((mx-1) , m) ;
	cout << ans << endl ;
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