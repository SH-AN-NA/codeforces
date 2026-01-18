// Codeforces Problem: 1866A - Ambitious Kid
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h> 
using namespace std; 
 int main()
{ 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
     int n; cin >> n;
    int x, mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
                mn=min(abs(x),mn);
            }
    cout << mn << endl;
    }