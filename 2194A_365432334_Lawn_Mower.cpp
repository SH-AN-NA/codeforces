// Codeforces Problem: 2194A - Lawn Mower
// Submission ID: 365432334
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
         long long n , w ;
        cin >> n >> w;
         long long x = n / w;
        cout << n - x << endl;
         }
}