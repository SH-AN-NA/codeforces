// Codeforces Problem: 2167A - Square?
// Submission ID: 366151155
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {  
        int a , b , c , d ;
        cin >> a >> b >> c >> d ;
         if(a==b && b == c && c==d)
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
    }
}