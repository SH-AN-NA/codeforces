// Codeforces Problem: 1881A - Don't Try to Count
// Submission ID: 365832552
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
        int m , n; 
        cin >> m >> n;
         string s, x;
        cin >> x >> s;
         int cnt = 0;
         for(int i = 0; i < 10; i++)   
        {
            if(x.find(s) != string::npos)
            {
                cout << cnt << endl;
                break;
            }
             x += x;
            cnt++;
             if(i == 9 )
                cout << -1 << endl;
        }
    }
}