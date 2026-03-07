// Codeforces Problem: 2106A - Dr. TC
// Submission ID: 365748867
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        string s ;
        cin >> s;
         int ans = 0 ;
         for(char i : s)
        {
            if(i=='0')
                ans++;
             else
                ans+=(n-1);
        }
         cout << ans << endl;
    }
}