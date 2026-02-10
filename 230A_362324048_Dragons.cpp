// Codeforces Problem: 230A - Dragons
// Submission ID: 362324048
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
   int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int s , n ;
    cin >> s >> n ;
     vector< pair <int , int>> a(n);
    for(int i =0 ; i<n ; i++)
        cin >> a[i].first >> a[i].second ;
     sort(a.begin(),a.end());
     for(int i =0 ; i<n ; i++)
    {
                 if(s> a[i].first)
            s += a[i].second;
        else 
        {
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES" ;
     }