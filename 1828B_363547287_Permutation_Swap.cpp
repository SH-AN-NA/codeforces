// Codeforces Problem: 1828B - Permutation Swap
// Submission ID: 363547287
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t;
     while(t--)
    {
        int n ; cin >> n ;
         vector<int> a(n);
         int dist = 0;
         for(int i=0 ; i < n ; i++)
        {
            cin >> a[i];
             int cnt = abs(a[i] - (i+1));
             dist = __gcd(dist , cnt);     
        }
         cout << dist << endl;
    }
    return 0;
}