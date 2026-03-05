// Codeforces Problem: 131A - cAPS lOCK
// Submission ID: 365511071
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     string s;
    cin >> s;
     string x = s;
    int n = s.size();
     if(s[0] >= 'a')
    {
        for(int i = 1 ; i < n ; i++)
        {
            if(s[i] > 'Z')
            {
                cout << x;
                return 0;
            }
            s[i] += ('a' - 'A');
        }
        s[0] += ('A' - 'a');
        cout << s;
    }
     else if(s[0] <= 'Z')
    {
        for(int i = 1 ; i < n ; i++)
        {
            if(s[i] >= 'a')
            {
                cout << x;
                return 0;
            }
             s[i] += ('a' - 'A');
        }
         s[0] += ('a' - 'A');
        cout << s;
    }
     else
        cout << x;
     return 0;
}