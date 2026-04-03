// Codeforces Problem: 2153A - Circle of Apple Trees
// Submission ID: 369510229
// Language: C++23 (GCC 14-64, msys2)

#include<vector>
#include<algorithm>
#include<iostream>
 using namespace std ;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        vector<int> a(n);
        for(int &x : a) 
            cin >> x;
         sort(a.begin(), a.end());
         int ans = unique(a.begin(), a.end()) - a.begin();
         cout << ans << endl;
          }
}
 // 4 2 1 2 3 5
// 1 -- 2 -- 3 -- 4 -- 5
 // 4 2 1 6 2 3 5
// 1 -- 2 -- 3 -- 4 -- 6
/*
        bool reached = false ;
        int mx = 0 , cnt = 0 ;
        for(int &i : a)
        {
            cin >> i ;
            mx = max(mx , i);
        }
        int i = 0 ,mn = 101 , val = 0;
        for(;i<n ; i++)
        {
            mn = min(a[i] , mn);
            val = i ;
        }
        i = val ; // giving initial
        val = mn ; // start from minimum
        while(reached && a[i] == mx)
        {
            if(a[i % n] == mx)
                reached = true ;
             if(a[i]>val)
            {
                cnt++ ;
                a[i]==val ;  
            }
            i++ ;
                     }
   */