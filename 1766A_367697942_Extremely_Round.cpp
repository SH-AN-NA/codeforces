// Codeforces Problem: 1766A - Extremely Round
// Submission ID: 367697942
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
  using namespace std ;
 void solve()
{
    int n ; cin >> n ;
    int digit = 0 , first = 0 ;
    while(n!=0)
    {
        first = n ;
        n /= 10 ;
        digit++ ;
    }
    cout << (digit - 1 )*9 + first << endl ;
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
// brute
// 1 2 3.....9 
// 10 20 30 .. 90
// 100 200 300.... 900
// 1000 2000 .... 9000
// 
//
// 100000 ..... 900000
 // optima;
// 17
// digit = 2 , first letter = 1
// ans = 9 + 1
// 290303
// digit = 6 , first letter = 2
// ans = 45 + 2 