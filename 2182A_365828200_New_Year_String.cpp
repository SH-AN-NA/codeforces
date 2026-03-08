// Codeforces Problem: 2182A - New Year String
// Submission ID: 365828200
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n ;
        string s ,sub1 = "2025" , sub2 = "2026" ; 
        cin >> s ;
                    int cnt6 = 0 , cnt5 = 0 ;
        for(int i = 0; i <= s.size() - sub1.size(); i++)
        {
            if(s.substr(i, sub1.size()) == sub1)
                cnt5++;
             if(s.substr(i, sub2.size()) == sub2)
                cnt6++;
        }
        if(cnt5==0 || cnt6 >=1)
            cout << "0" << endl;
         else
            cout << 1 << endl ;
    }
}