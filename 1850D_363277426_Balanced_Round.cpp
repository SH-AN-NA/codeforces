// Codeforces Problem: 1850D - Balanced Round
// Submission ID: 363277426
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
         multiset<int> s;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
         if(n == 1)
        {
            cout << 0 << '\n';
            continue;
        }
         int cnt = 0;
        int segment = 1;
         auto it = s.begin();
        auto prev = it;
        ++it;
         for(; it != s.end(); ++it)
        {
            if(*it - *prev > k)
                cnt = 0;
            else
                cnt++;
             segment = max(segment, cnt + 1);
            prev = it;
        }
         cout << n - segment << endl;
    }
}
            // vector<int>a(n);
        // for(auto &i : a)
        //     cin >> i;
         // sort(a.begin(),a.end());
         // int cnt =0;
        // int segment = 0;
        // for(int i = 1 ; i < n ; i++)
        // {
                    //     if (n==1)
        //         break;
                 //     if(a[i]-a[i-1]>k)
        //         cnt = 0;
                    //     else
        //         cnt++; 
                        //     segment = max(segment,cnt+1);
                    // }
         // if (n==1)
        //     cout << 0 << endl;
        // else 
        //     cout << (n-segment) << endl;
   