// Codeforces Problem: 2155A - El fucho
// Submission ID: 367136153
// Language: C++23 (GCC 14-64, msys2)

//800 brute
#include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
         int lose = 0 , win = n , sol = 0 ;
         while(lose > 1 || win > 1)
        {
            sol += lose /2 ;
            lose = (lose + 1)/2  ;
                         lose += win / 2 ;
            sol += win /2 ;
            win = (win+1)/2 ;
                    }
        sol++ ;
         cout << sol << endl ;
        }
}
    /*
     17 
    8 matches 
      9 winners   4 matches  5 winners       2 mathces  3 winners         1 match     2 winner        1 match     1 winner
    8 loosers   4 matches  4 + 4 loosers   4 matches  4 + 2 loosers     3 match     3 + 1 looser    2 macth     2+1 looser  1 match  2 looser 1 match 1 looser
         */