// Codeforces Problem: 2218D - The 67th OEIS Problem
// Submission ID: 369762523
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
      vector<ll> p;
    for(int i = 2; (int)p.size() < 10001; i++)
    {
        if(isPrime(i))
            p.push_back(i);
    }
      int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
         cout << p[0];
         for(int i = 1; i < n-1; i++)
            cout << " " << p[i-1] * p[i];
         cout << " " << p[n-2] << endl;
    }
}
                                 // 2 4 3 6 5 10 7 14 9 18
                                 // i = 2 , 4
                                // i = 3 << 2*i     i=+2 << 2*i
                                // n = 1e4
                                // ai = 2 * (2n+1) << 1e18
                                 // 1 2 3 6
                                   // 1 2 4 8 16 
                                 // 2*1e4
                                  // 1 2 4 
                                 // 3 6 6 24 24 24*5 24*5 ... till n 
                                // (2n+1)(2n+2)
  // gcd 1 2 3 4 5 ... 1e4
 // 1 2 6 12 20 ... 1e4*1e4 
//  1 2 6???
   // gcd primes  2 3 5 7 11 
//             2 6 15 35 35*11 11
//