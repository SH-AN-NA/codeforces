// Codeforces Problem: 2164A - Sequence Game
// Submission ID: 366159973
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
        int n , x ; 
        cin >> n ;
        vector<int> a(n) ;
         int mn = INT_MAX , mx = INT_MIN ; 
        for(int & i : a)
        {
            cin >> i ;
            mn = min(mn , i);
            mx = max(mx , i);
        }
        cin >> x ;
        if(x <= mx && x >= mn)
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
    }
}
 // x should be between least and max value