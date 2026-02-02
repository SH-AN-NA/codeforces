// Codeforces Problem: 1829A - Love Story
// Submission ID: 361180906
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
    string s = "codeforces";
     while(t--)
    {
        char c;
        int cnt=0;
        for(int i =0 ; i < s.size() ; i++)
        {
            cin >> c ;
            if(c!=s[i])
                cnt++;
        }
        cout << cnt << endl;
    }
}