// Codeforces Problem: 2211B - Mickey Mouse Constructive
// Submission ID: 369887694
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 const int MOD = 676767677;
 long long pow2(int e)
{
    if(e < 0) 
        return 1;
else 
{
    long long r = 1, b = 2;
     while(e)
    {
         if(e&1) 
            r = r*b % MOD;
         b = b*b % MOD;
        e >>= 1;
    }
     return r;
  }
    }
 int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
     int t; cin >> t;
    while(t--)
    {
        int x,y; 
        cin>>x>>y;
          if(x == y)
        {
            cout << 1 << endl;
                        for(int i = 0; i < x; i++) 
                cout << "1 ";  
                            for(int i = 0; i < y; i++) 
                cout << "-1 ";   
        }
             else 
        {
            int s = abs(x-y), d = 0;
             for(int i=1 ; (long long)i*i<=s ; i++ )
            {
                if(s%i==0) 
                    d += 1 + ((long long)i*i!=s);
             }
             cout<< d << endl;
             if(x>y)
            {
                             for(int i=0 ; i<x ; i++ ) 
                    cout<< "1 " ;
                 for(int i=0 ;i<y ; i++) 
                    cout<< "-1 " ;
            } 
                        else
            {
                  for(int i=0 ;i <y ;i++ ) 
                    cout<< "-1 " ;
                 for(int i=0 ; i<x; i++) 
                    cout<< "1 " ;
            }
          }
          cout<< endl ;
    }
   }
/*
    if x and y are equal sum is 0 
    so ans  = n/2 + n/4 .. 1
    otherr wise ans is divisor of x-y
    if x or y == 0 
    if odd  
    ans = pow(2,n-1)
 */