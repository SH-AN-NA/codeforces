// Codeforces Problem: 2209B - Array
// Submission ID: 367641708
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std ;
  int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t ; // t <=100
    while(t--)
    {
        int n ; cin >> n ;
         vector<int> a(n) ;
        for(int &i : a)
            cin >> i ;
                 for(int i = 0 ; i < n ; i++) // n <= 5000 n*n = 25000000
        {
            int cntg = 0 , cntl = 0 ;
             for(int j = i+1 ; j < n ; j++)
            {
                if(a[i]<a[j])
                    cntl++ ;
                 else if(a[i]>a[j])
                    cntg++ ;
            }
            cout << max(cntl,cntg) << " " ;
        }
        cout << endl;
              }
}
/*
1 9 20 9 829 3 87 1 283 7
 for i = 1 j = 2 ... n
    greater than a[i] cntg++
    lesser than a[i] cntl++
    max(cntg , cnt l)
       */