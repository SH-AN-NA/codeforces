// Codeforces Problem: 2158A - Suspension
// Submission ID: 367120763
// Language: C++23 (GCC 14-64, msys2)

//800
#include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n , r , y ;
        cin >> n >> y >> r ;
         cout << min(n , r + y/2) << endl;
     }
}