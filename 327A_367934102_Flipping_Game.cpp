// Codeforces Problem: 327A - Flipping Game
// Submission ID: 367934102
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
using namespace std ;
 void solve_brute()
{
    int n ; cin >> n ;
    vector<int> a(n)  ;
    int cnt = 0 ;
    for(int &i : a)
    {
        cin >> i ;
        if(i)
            cnt++ ;
    }
     vector<int> temp = a  ;
    int mxcnt = 0 ;
     int org_cnt = cnt ;
    for(int i = 0 ; i < n ; i++)
    {
                for(int j = i ; j < n ; j ++)
        {
            for(int k = i ; k <= j ; k++)
            {
                if(temp[k])
                    cnt-- ;
                else
                    cnt++ ;
                 temp[k] = 1 - temp[k] ;
            }
            temp = a ;
            mxcnt = max(mxcnt , cnt) ;
            cnt = org_cnt ;
        }
            }
    cout << mxcnt ;
  }
 void solve_better()
{
    int n ; cin >> n ;
   }
  int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      {
        solve_brute();
    } 
}
 // 1 0 0 1 0 0 1
// 1 1 1 0 1 1 0
 // 1 0 0 0 1 1 1 0 0 1 0 0 
// 1 1 1 1 1 1 1 0 0 1 0 0
// or
// 1 0 0 0 1 1 1 1 1 0 1 1