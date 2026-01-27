// Codeforces Problem: 1857A - Array Coloring
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
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
        cin >> n;
         vector<int> a(n);
        int oddcnt = 0;
         for(auto &x : a)
        {
            cin >> x;
            if(x % 2 == 1)
                oddcnt++;
        }
         if(oddcnt % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}