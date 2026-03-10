// Codeforces Problem: 2179B - Blackslex and Showering
// Submission ID: 366128831
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
         vector<int> a(n) ;
                for(int &i : a)
            cin >> i ;
         vector<int> b(n-1) ;
        for(int i = 1 ; i < n ; i++)
        {
            b[i-1] = a[i] - a[i-1];
        }
         int sum = 0;
        for(int i = 0; i < n-1; i++)
            sum += abs(b[i]);
         int maxi = 0;
         for(int i = 0 ; i < n-2; i++)
        {
            int reduction = abs(b[i]) + abs(b[i+1]) - abs(b[i]+b[i+1]);
            maxi = max(maxi , reduction);
        }
         maxi = max(maxi , abs(b[0]));
        maxi = max(maxi , abs(b[n-2]));
         cout << sum - maxi << endl ;
    }
}
   