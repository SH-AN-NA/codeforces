// Codeforces Problem: 1850D - Balanced Round
// Submission ID: 363278353
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while (t--)
    {
        int n, k;
        cin >> n >> k;
         vector<int> a(n);
        for (int &x : a)
            cin >> x;
         sort(a.begin(), a.end());
         if (n == 1)
        {
            cout << 0 << endl;
            continue; // EVEN IF COUT << 0 IN LOOP WONT MATTER AS LOOP DOESNT RUN
        }
         int cnt = 0, segment = 1;
         for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > k)
                cnt = 0;
            else
                cnt++;
             segment = max(segment, cnt + 1);
        }
         cout << n - segment << endl;
    }
}
 