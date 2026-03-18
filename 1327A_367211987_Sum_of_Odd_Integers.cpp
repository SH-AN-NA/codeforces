// Codeforces Problem: 1327A - Sum of Odd Integers
// Submission ID: 367211987
// Language: C++23 (GCC 14-64, msys2)

//1100
#include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n , k ;
        cin >> n >> k ;
         if((n%2==k%2)&&( k <= n/k))
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
     }
}
/*
     1. n%2 == k%2
    17 17
    no
    17 10
    1 3 5 7 9.. n^2
     so k should be less than root 17
       */