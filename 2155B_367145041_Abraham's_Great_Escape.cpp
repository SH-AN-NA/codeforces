// Codeforces Problem: 2155B - Abraham's Great Escape
// Submission ID: 367145041
// Language: C++23 (GCC 14-64, msys2)

//1100
#include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n , k ;
        cin >> n >> k;
        if(k + 1 == n*n)
        cout << "NO" << endl ;
         else 
        {
            cout << "YES" << endl ;
            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < n ; j++)
                {
                    if(k!=0)
                    {
                        cout << "U" ;
                        k--;
                    }
                     else if(j == n-1 && i == n-1)
                        cout << "L" ; 
                    else if(j == n-1)                 
                        cout << "D" ;  
                    else                              
                        cout << "R" ;   
                }
                cout << endl;
            }
        }  
    }
}
    // 4 10
    // U U U U
    // U U U U
    // U U R L
    // R L R L
     // 7 27
    // U U U U U U U
    // U U U U U U U
    // U U U U U U U
    // U U U U U U D
    // R L R L R L U
    // R L R L R L U
    // R L R L R L U
      // 10 31
     // UUUUUUUUUU
    // UUUUUUUUUU
    // UUUUUUUUUU
    // URRRRRRRRD
    // RRRRRRRRRD
    // RRRRRRRRRD
    // RRRRRRRRRD
    // RRRRRRRRRD
    // RRRRRRRRRD
    // RRRRRRRRRL