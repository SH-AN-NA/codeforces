// Codeforces Problem: 2166A - Same Difference
// Submission ID: 366288508
// Language: C++23 (GCC 14-64, msys2)

// 800
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        string s ; cin >> s;
         int cnt = 0 ;
         for(int i = 0 ; i < n ; i++ )
        {
            if(s[i]!=s[n-1])
                cnt++ ;
        }
        cout << cnt << endl;
    }
}