// Codeforces Problem: 1853A - Desorting
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
        int cntsort = 0;
        int cnt_min_diff = INT_MAX;
         for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i > 0 && a[i] >= a[i-1])
                cntsort++;
        }
                 if(cntsort != n - 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for(int i = 1; i < n; i++)
            {
                cnt_min_diff = min(cnt_min_diff, a[i] - a[i-1]);
            }
             cout << (cnt_min_diff / 2) + 1 << endl;
        }
    }
}