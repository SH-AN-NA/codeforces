// Codeforces Problem: 71B - Progress Bar
// Language: C++17 (GCC 7-32)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int n,k,t;
    cin >> n>>k>>t;
    int x = (t*n*k)/(100);
    for(int i =0; i<n; i++)
    {
            cout << min(x,k)<<" ";
        x = x - min(x,k);
            }
     return 0;
}