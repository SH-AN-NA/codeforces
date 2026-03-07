// Codeforces Problem: 2125B - Left and Down
// Submission ID: 365708010
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
     while(t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
         long long g = __gcd(a, b);
         if(a / g <= k && b / g <= k)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}