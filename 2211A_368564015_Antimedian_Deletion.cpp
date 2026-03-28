// Codeforces Problem: 2211A - Antimedian Deletion
// Submission ID: 368564015
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std ;
 int main()
{
    int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        vector <int> a(n) ;
         for(int &i : a)
        {
            cin >> i ;
            cout << min(n,2) << " " ;
        }   
      cout << endl ;   
    }
 }
 /*
 1 3 4 5 2
 1 3 5 2
 1 3 2 
 1 2
  1 3 4 5 2
 3 4 5 2
 3 4 2
 3 4 or 3 2
  1 3 4 5 2
 3 4 5 2
 3 4 2
 3 4
  1 3 4 5 2 
 3 4 5 2
 4 5 2
 4 5
   2 1 3
 */