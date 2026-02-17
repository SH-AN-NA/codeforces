// Codeforces Problem: 443A - Anton and Letters
// Submission ID: 363430393
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    string s;
    getline(cin, s);
     set<char> st;
     for(char c : s)
    {
        if(c >= 'a' && c <= 'z')
            st.insert(c);
    }
     cout << st.size();
    return 0;
}