// Codeforces Problem: 2154A - Notelock
// Submission ID: 367524919
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
         int ans = 0;
        int key = 0 ;
         for(int i = 0; i < n; i++)
        {
            if(s[i] == '1' && key == 0)
            {
                key = k - 1 ;
                ans ++ ;
            }
            if(s[i] == '1' && key != 0)
            {
                key = k - 1 ;
            }
            else if(s[i] != '1' && key != 0)
            {
                key--;
            }
        }
         cout << ans << "\n";
    }
}