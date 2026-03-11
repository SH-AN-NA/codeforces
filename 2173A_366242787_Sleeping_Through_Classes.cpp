// Codeforces Problem: 2173A - Sleeping Through Classes
// Submission ID: 366242787
// Language: C++23 (GCC 14-64, msys2)

// 800
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while (t--)
    {
        int n , k ; 
        cin >> n >> k ;
         string s ; cin >> s;
         int wake = 0 , sleep = 0 ;
        for(char i : s)
        {
            if(i == '1')
            {
                wake = k ;
            }
            else if(wake>0 && i == '0')
            {
                wake--;
             }
            else if(wake==0 && i == '0')
                sleep++ ;
        }
        cout << sleep << endl;
     }
}