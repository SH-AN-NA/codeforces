// Codeforces Problem: 2185D - OutOfMemoryError
// Submission ID: 376164308
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
        int n,m,h;
        cin >> n>>m>>h;
        vector<int> a(n);
        vector<int> copya(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            copya[i]=a[i];
        }
         vector<int>b(m);
        vector<long long>c(m);
         for (int i = 0; i < m; i++)
        {
            cin >> b[i]>> c[i];
            b[i]--;
        }
         int crashed_idx = -1 ;
        vector<int> last_update(n, -1);
        for (int i = 0; i < m; i++)
        {
            if (last_update[b[i]] < crashed_idx)
            {
                a[b[i]] = copya[b[i]];
            }
             a[b[i]] += c[i] ;
             if(a[(b[i])] > h)
            {
                crashed_idx = i ; 
                a[b[i]] = copya[b[i]]; ;
            }
             last_update[b[i]] = i;
         }
             for(int i = crashed_idx + 1; i < m; i++)
            {
                     copya[b[i]] += c[i] ;
            }
                  for(auto it : copya)
            cout << it << " " ;
         cout << '\n' ;
    }
     }