// Codeforces Problem: 1791B - Following Directions
// Submission ID: 362540483
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
   int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
        int n ; cin >> n;
        string s;
        cin >> s;
         int x = 0 , y = 0 ;
         for(char c : s)
        {
            if(c=='U')
                x++;
            if(c=='R')
                y++;
            if(c=='D')
                x--;
            if(c=='L')
                y--;
             if((x==1)&&(y==1))   
                break;
        }
                 if((x==1)&&(y==1))
            cout << "YES" << endl;
                else 
            cout << "NO" << endl;   
    }
                     }