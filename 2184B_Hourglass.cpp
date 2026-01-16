// Codeforces Problem: 2184B - Hourglass
// Language: C++17 (GCC 7-32)

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
        int s, k, m;
        cin >> s >>k >>m;
         if(s <= k)
            cout << max(0, s - (m % k)) <<endl;
        else if((m / k)% 2 == 1)
            cout << k- (m % k) << endl;
        else
            cout << s -(m % k) <<endl ;
    }
    return 0;
}