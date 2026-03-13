// Codeforces Problem: 2161A - Round Trip
// Submission ID: 366546531
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
     while(t--)
    {
        int r,x,d,n;
        cin >> r >> x >> d >> n;
         string s;
        cin >> s;
         int cnt = 0;
         for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                if(r >= x)
                {
                    r -= d;
                    cnt++;
                }
                else
                    cnt++;
            }
            else if(s[i] == '2')
            {
                if(r < x)
                    cnt++;
            }
        }
         cout << cnt << endl;
    }
}