// Codeforces Problem: 1462C - Unique Number
// Submission ID: 365519835
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
        int n; 
        cin >> n ;
                if(n > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> sol;
             for(int i = 9; i >= 1; i--)
            {
                if(n >= i)
                {
                    sol.push_back(i);
                    n -= i;
                }
            }
             reverse(sol.begin(), sol.end());
             for(int i : sol)
            {
                cout << i;
            }
             cout << endl;
        }
    }
     return 0;
}