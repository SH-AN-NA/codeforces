// Codeforces Problem: 1807D - Odd Queries
// Submission ID: 363551088
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
  // optimal
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t;
     while(t--)
    {
         int n , q ;
        cin >> n >> q ;
         vector<int>a(n) , suma(n+1);
        for(int &i : a)
            cin >> i;
         for(int i = 1 ; i <=n ; i++)
            suma[i] = suma[i-1] + a[i-1];
         ll sum = suma[n] ;
         while(q--)
        {
            int l , r , k ;
            cin >> l >> r >> k;
             if((sum - (suma[r]- suma[l-1]) + (r-l+1) * k)%2!=0)
                cout << "YES" << endl;
             else 
                cout << "NO" << endl;
        }
    }
}
  