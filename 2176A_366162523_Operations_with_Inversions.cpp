// Codeforces Problem: 2176A - Operations with Inversions
// Submission ID: 366162523
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    { 
        int n ; 
        cin >> n ;
         vector<int> a(n);
         for(int &i : a)
            cin >> i ;
         int mn = a[0] ;
        int cnt = 0 ;
         for(int i : a)
        {
            if(i < mn)
            {
                cnt++ ;
                            }
            else
                mn = i ;
        }
        cout << cnt << endl ;
    }
}