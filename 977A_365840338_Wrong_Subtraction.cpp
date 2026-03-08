// Codeforces Problem: 977A - Wrong Subtraction
// Submission ID: 365840338
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n , k ;
    cin >> n >> k ;
        while(k--)
    {
        if(n%10==0)
            n /= 10;
                else
            n--;
    }
    cout << n ;
  }