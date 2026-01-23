// Codeforces Problem: 2166B - Tab Closing
// Submission ID: 359462786
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int func(int a, int b, int c)
{
     if ((b <= (double)a/c )|| b>=a)
        return 1;
     else
    return 2;
}
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        cout << func(a, b, n) << endl;
    }
    return 0;
}