// Codeforces Problem: 479A - Expression
// Submission ID: 362165353
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int a , b , c; 
    cin >> a >> b >> c;
     int maxi = 0;
     maxi = max({(a*b*c) , a+(b*c) , (a*b)+c , (a+b)*c , a*(b+c) , a+b+c});
     cout << maxi;
     }