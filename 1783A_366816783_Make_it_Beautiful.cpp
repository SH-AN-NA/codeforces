// Codeforces Problem: 1783A - Make it Beautiful
// Submission ID: 366816783
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
        int cnt = 0 ;
         vector<int>a(n);
        for(int &i : a)
            cin >> i ;
         sort(a.begin() , a.end());
          if(a[n-1]==a[0])
            cout << "NO" << endl;
          else
        {
            cout << "YES" << endl ;
            cout << a[0] << " ";
            for(int i = n - 1 ; i > 0 ; i--)
                cout << a[i] << " ";
             cout << endl ;
        }
                     }
}