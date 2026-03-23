// Codeforces Problem: 1726A - Mainak and Array
// Submission ID: 367940271
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
using namespace std ;
 void solve()
{
    int n ; cin >> n ; 
    vector<int> a(n) ;
     for(int &i : a)
        cin >> i ;
     int mx = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        // mx = max (mx , abs(a[i]-a[(n-1+i) % n]));
        // segment len is not fixed
         // for(int j = i + 1 ; j < n ; j++) // brute(n*n < 4e6)
        // {
        //     mx = max(mx , abs(a[i] - a[j]));
        // } // only operation is allowed
          mx = max (mx , (a[(n-1+i) % n]- a[i])); //all possible cycles of n lenght
            }
    for(int i = 0 ; i < n-1 ; i++)
        mx = max(mx , (a[n-1]-a[i])); // possible cycles of any len include=ing a[n-1]
     for(int i = 1 ; i < n ; i++)
        mx = max(mx , (a[i]-a[0])); // including a[0] ;
    cout << mx << endl ;
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