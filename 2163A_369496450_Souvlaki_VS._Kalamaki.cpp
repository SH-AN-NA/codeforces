// Codeforces Problem: 2163A - Souvlaki VS. Kalamaki
// Submission ID: 369496450
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
        vector<int> a  ;
        a.resize(n);
         for(int &i : a)
        {
            cin >> i ;
        }
         sort(a.begin(), a.end()) ;
         bool access = true ;
        for(int i = 1 ; i < n-1 ; i+=2)
        {
            if(a[i]!=a[i+1])
            {
                access = false ;
                break ;
            }
        }
        if(access==false)
        cout << "NO\n" ;
         else
            cout << "YES\n" ;
         }
}
// s can win onlt after securing all indexes k can access
// k access even indexes means total n-1/2 
// those can be secured only be having same elements at nth and n+1th index
// 1 1 2
// ai <= n ;
// 1 2 2 4
 // 1 1 2 4
 //3 3 4 5