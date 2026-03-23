// Codeforces Problem: 1696B - NIT Destroys the Universe
// Submission ID: 367899571
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
using namespace std ;
 void solve()
{
    int n ; cin >> n ;
    int curr_len = 0 , max_len = 0 ;
    int cnt = 0 ;
    vector<int> a(n) ;
        for(int & i : a)
    {
        cin >> i ;
           if(i != 0)
        {
            curr_len ++ ;
        }
        else if(curr_len > 0 && i == 0)
        {
            curr_len = 0 ;
            cnt++ ;
        }
        else
            curr_len = 0 ;
              }
    if(curr_len > 0)
        cnt++ ;
        cout << (cnt > 1 ? 2 : cnt ) << endl ;
 }
  int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        solve();
    } 
}
  // since for segment greater 2 we can use two operation first perateion all element becomes mex than all mex becomes 0 on next opearion 