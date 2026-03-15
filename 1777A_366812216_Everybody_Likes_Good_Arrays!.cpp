// Codeforces Problem: 1777A - Everybody Likes Good Arrays!
// Submission ID: 366812216
// Language: C++23 (GCC 14-64, msys2)

//800
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
        vector<int> a(n);
         for(int &i : a)
            cin >> i ;
         int seg1 = 0 ;
          for(int i = 0 ; i < n-1 ; i++)
        {
                         if(a[i] % 2 == a[i+1] % 2)
            {
                seg1++ ;
               }
          }
          cout << seg1 << endl;
      }
}
  // 1 3 5 7 9 2 4 6
//  3  5 7 9 2 4 6
//   15  7 9 2 4 6
//    15*7 9 2 4 6
//    15*7*9 2 4 6
//    15*7*9  8  6
//    15*7*9   48 
 // 6 STEPS = 5-1 + 3-1