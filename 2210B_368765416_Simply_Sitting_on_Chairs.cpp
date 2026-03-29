// Codeforces Problem: 2210B - Simply Sitting on Chairs
// Submission ID: 368765416
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
        int n;
        cin >> n;
         vector<int> p(n);
        int cnt = 0 ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> p[i];
            if(p[i] <= i+1)
                cnt++ ;
        }    
         cout << cnt << endl ;
               }
}