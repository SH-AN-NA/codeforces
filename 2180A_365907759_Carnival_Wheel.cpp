// Codeforces Problem: 2180A - Carnival Wheel
// Submission ID: 365907759
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
     while(t--)
    {
        int l , a , b ; 
        cin >> l >> a >> b ; 
        int i = 0 , mx = 0;
                while(i<l)
        {
            mx = max(mx, (a+ i*b)%l);
            i++;
        }
        cout << mx  << endl;
                }
}