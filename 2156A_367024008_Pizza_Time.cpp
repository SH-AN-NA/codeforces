// Codeforces Problem: 2156A - Pizza Time
// Submission ID: 367024008
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
        int m1 = 0  , m3 = 0 ;
         while( n > 2)
        {
            m1 += n/3 ;
            m3 = n/3 + n % 3 ;
            n = m3 ;
          }
        cout << m1 << endl;
      }
}
/*
maximize m1
minimize m3
 12
4+4+4
4 --
4
1 1 2
1 --
   17
17/3 = 5
5 5 7       5 6 6
5--         5--
7           6
7/3         6/3
2 2 3       2 2 2
2--         2--
3           2
1 1 1       0
1--
 8--
 so mimize m2 or m2=m1
          */