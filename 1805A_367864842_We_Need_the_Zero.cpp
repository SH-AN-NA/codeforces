// Codeforces Problem: 1805A - We Need the Zero
// Submission ID: 367864842
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
#include<cmath>
 using namespace std ;
 void solve()
{
    int n ; cin >> n ;
    vector<int> a(n) ;
    int xr = 0 ;
     for(int &i : a)
    {
        cin >> i ;
        xr = xr ^ i ;
    }
     if(xr != 0 && n % 2 == 0)
        cout << -1 << endl ;
     else if(xr == 0)
        cout << 0 << endl ;
     else
        cout << xr << endl ;
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
// the final xor = a1 ^ a2 .... ^an ^ sol ^ sol ^sol(till n times)
// so if n is even no point of having sol cz then xor = a1 ^ a2 .... ^an
// and xor != 0 for n even -1 else 0
// and final sol = xor(i)
// xor(f) = xor(i) + sol (since n is odd)
// xor(f) == 0 if sol = sor(i)