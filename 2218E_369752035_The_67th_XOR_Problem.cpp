// Codeforces Problem: 2218E - The 67th XOR Problem
// Submission ID: 369752035
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std ;
  int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        vector<int>a(n) ;
         vector<int>xorr ;
        for(int &i : a)
        {
            cin >> i ;
         }
         for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                xorr.push_back(a[i]^a[j]) ;
            }
        }
        int sol = 0 ;
        for(auto it : xorr)
        {
            sol = max(sol,it);
        }
        cout << sol << endl ;
    }
}
  // 1 2 3
// 1x2 2x2 3x2
// 1x2 3x2
// 1x2x(3x2) = 1x3 
// 1 x 3 or 2x3 or 1x2 max of
   // 1 2 3 5
// 1x2 2x2 3x2 5x2
// 1x2 3x2 5x2
// 1x3 1x5
// 3x5
// max of xor of any two
  // 1 2 2 3 5
// 2x1 2x1 3x1 5x1
// 2x3 2x3 5x3
// 2x5 