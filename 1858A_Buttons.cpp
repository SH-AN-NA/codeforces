// Codeforces Problem: 1858A - Buttons
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while(t--)
    {
        int a , b , c;
        cin >> a >> b >> c ;
         if(a> b)
            cout << "First" << endl;
        else if(a < b)
            cout << "Second" << endl;
                    else if (c%2==0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
     }
    return 0;
}