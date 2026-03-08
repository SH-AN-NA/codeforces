// Codeforces Problem: 1881A - Don't Try to Count
// Submission ID: 365832866
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
        int m,n;
        cin >> m >> n;
         string x,s;
        cin >> x >> s;
         int cnt = 0;
         while(x.size() < s.size())
        {
            x += x;
            cnt++;
        }
         if(x.find(s) != string::npos)
        {
            cout << cnt << endl;
            continue;
        }
         x += x;
        cnt++;
         if(x.find(s) != string::npos)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
}