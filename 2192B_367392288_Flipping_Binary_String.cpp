// Codeforces Problem: 2192B - Flipping Binary String
// Submission ID: 367392288
// Language: C++23 (GCC 14-64, msys2)

// 1100 string 
 #include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        string s ; cin >> s ;
        int cnt1 = 0 ;
        for(char i : s)
        {
            if(i == '1')
                cnt1++ ;
         }
        if(cnt1 % 2 == 1 && n % 2 == 1)
            cout << -1 << endl ;
         else if(cnt1 == 0)
            cout << 0 << endl ;
        else 
        { 
            cout << ((n-cnt1) % 2 == 0 ? cnt1 : n - cnt1) << endl ;
             for(int i = 0 ; i < n ; i++)
            {
                if((n-cnt1) % 2 == 1 && s[i] == '0')
                    cout << i+1 << " " ;
                 else if ((n-cnt1) % 2 == 0 && s[i] == '1')
                    cout << i + 1 << " ";
             }
            cout << endl ;
        }
              }
}
 /*
    1100011
    1 011100    1 011100
    0000011     00 00011
    1111110     111111 0
    0000000     0000001 . // operated on position of one
     0001100
    1111011
     1100
    1011
    0000
      11000
    10111
    00000
     100
    111
          111000
    000011
    111110
    000000   /// operated on position of 0s when no of 0s are odd
     1110000
    0000111
    1111100
    not possible 1's odd 0's even
      10010
    11101
    00000 // operated on 1s
     00101
    11110
    00000 // can be operated on 0s as well so if 0s is odd can be apply on 0s
      if 0s odd and 1s odd apply on o
    if 0s odd and 1s is even apply on both 0 1 
            but fails for 01 case where only can be applied on 0
            as operation is done only once but it would require 3 opratiopns
     if 1s even and 0s even only on 1
      // 0s odd apply on 0
    //os even apply on 1
          10
    00 
 */