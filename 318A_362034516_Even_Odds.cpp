// Codeforces Problem: 318A - Even Odds
// Submission ID: 362034516
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     ll n , k ;
    cin >> n >> k ;
    ll x = (n + 1)/2;
     if(k<=x)
        cout << 2*k -1 ;
     else 
        cout <<  2*(k-x) ;
      }