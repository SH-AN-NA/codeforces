// Codeforces Problem: 2167C - Isamatdin and His Magic Wand!
// Submission ID: 366257053
// Language: C++23 (GCC 14-64, msys2)

// 800
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while (t--)
    {
        int n ; cin >> n ;
        vector<int> a(n);
         bool odd = false , even = false ;
                for(int &i : a)
        {
            cin >> i ;
            if(i%2==0)
                even = true ;
             else 
                odd = true ;
        }    
                if(odd && even)
            sort(a.begin(),a.end()) ;
                        for(int i : a)
            cout << i << " " ;
                    cout << endl ;
                    // the goal is to make maximum sorted and t=not the mjinimum sort or lexiographic
        // int mn = INT_MAX;
                         //     int num = a[0];
         //     if(mn==a[0])
        //         num = a[1];
           // for(int i = 1 ; i < n ; i++)
        // {
        //     if(num == a[0])
        //     {
        //         if((a[i]%2 != a[0]%2 )&&( a[i]<a[0]))
        //         {
        //             swap(a[0],a[i]);
        //         }
                             //     }
        //     else {
        //         if((a[i]%2 != a[1]%2 )&&( a[i]<a[1]))
        //             swap(a[1],a[i]) ;
        //     }
                    // }
                // for(int i : a)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
}
 