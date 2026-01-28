// Codeforces Problem: 1837A - Grasshopper on a Line
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if((x % k != 0)||(x<k))
            cout << 1 << endl << x << endl;
                 else if((k==2)||(x==k))
            cout << 2 << endl << x-1 << " " << 1 << endl;
                else //for k = any value
             cout << 2 << endl << x-1 << " " << 1 << endl;
     }
 }