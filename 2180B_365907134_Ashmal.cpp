// Codeforces Problem: 2180B - Ashmal
// Submission ID: 365907134
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
     while(t--)
    {
        int n ; cin >> n ; 
        vector<string> a(n);
        string x ;
        for(string &i : a)
        {
            cin >> i;
        }
        for(int i = 0 ; i < n ; i++)
        {
            x = min(a[i] + x , x + a[i]);
        }
        cout << x <<endl;
    }
}