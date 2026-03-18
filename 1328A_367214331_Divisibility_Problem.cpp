// Codeforces Problem: 1328A - Divisibility Problem
// Submission ID: 367214331
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
        int a , b ;
        cin >> a >> b ;
         cout << (a%b == 0 ? 0 : b - (a%b)) << '\n' ;
     }
}