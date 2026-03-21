// Codeforces Problem: 2209A - Flip Flops
// Submission ID: 367628140
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std ;
  int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t ;
    while(t--)
    {
        long long n , c , k ; 
        cin >> n >> c >> k ;
         vector<int> a(n) ;
        for(int &i : a)
            cin >> i ;
         sort(a.begin() , a.end());
         if(c < a[0])
            cout << c << endl ;
         else
        {
            for(int i = 0 ; i < n ; i++)
            {
                if(a[i]<=c)
                {
                    if(c - a[i] <= k)
                    {
                        k = k - c + a[i] ;
                        a[i] = c ;
                        c = 2*c ;
                    }
                    else
                    {
                        a[i] += k ;
                        c += a[i] ;
                        k = 0;
                    }   
                }
                        }
            cout << c << endl;
        }
              }
}
/*
    5 18 30
    1 2 93 84 2
        1 2 2 84 93
     1<18    18 - 1 < k(30)  a1 = 18 , c = c + a1 , k = k - c - a1 = 13   c = 36 
     2< 36    36 - 2 !< k    a1 = a1 + k = 15  , c = c + a1 = 51 , k = 0   c = 51
     2 < 51    k == 0  c = c + a1 
   */