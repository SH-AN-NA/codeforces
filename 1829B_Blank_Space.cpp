// Codeforces Problem: 1829B - Blank Space
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
        int cnt0 = 0 , len = 0;
        int n; cin >> n;
        vector<int> a(n);
        for( int &i : a )
        {
            cin >> i;
            if(i==1)
            {
                cnt0=0;
            }
            else cnt0++;
            len = max(len,cnt0);
        }
        cout << len << endl;
    }
}