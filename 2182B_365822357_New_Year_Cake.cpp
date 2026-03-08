// Codeforces Problem: 2182B - New Year Cake
// Submission ID: 365822357
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
        int a, b;
        cin >> a >> b;
         int ans = 0;
         int x = a, mx = b;
        int y = 4, sol = 0;
         for(int i = 0; i < 21; i++)
        {
            if(3 * x >= y - 1 && 3 * mx >= 2 * (y - 1))
            {
                sol = i + 1; y *= 4; 
            }
            else 
                break;
        }
         if(x - (y/4 - 1)/3 >= y/4)
            ans = max(ans, 2*sol + 1);
         else
            ans = max(ans, 2*sol);
                 x = b; mx = a;
        y = 4; sol = 0;
          for(int i = 0; i < 21; i++)
        {
            if(3 * x >= y - 1 && 3 * mx >= 2 * (y - 1))
            {
                sol = i + 1; y *= 4; 
            }
            else 
                break;
        }
         if(x - (y/4 - 1)/3 >= y/4)
            ans = max(ans, 2*sol + 1);
         else 
            ans = max(ans, 2*sol);
         cout << ans << "\n";
            }
}
// 2
// 4
// 8
// 16
// 32
// 64
// 128
 // black - (odd) 1 + 4 + 16 .....
// black max >= (4^k - 1) / 3
// white max >= 2 * (4^k - 1) / 3 
//              k === layers
 // same again for blac -(even) 2 , 8 , 32...
// white max >= (4^k - 1) / 3
// black max >= 2 * (4^k - 1) / 3 
// k == layers
 // ans = 2*k layers
//but if extra is left >= y/4(y iterated extra)