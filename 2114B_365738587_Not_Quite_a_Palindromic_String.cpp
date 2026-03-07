// Codeforces Problem: 2114B - Not Quite a Palindromic String
// Submission ID: 365738587
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<string>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n , k , cnt = 0 , cnt0 = 0 , cnt1 = 0 ; 
        cin >> n >> k ;
         string s ; cin >> s ;
         int minpair = 0 , maxpair = 0 ;
         for(int i = 0 ; i < n /2  ; i++)
        {
            if(s[i]==s[n - i - 1])
                cnt++;
        }
        for( char i : s)
        {
             if(i=='0')
                cnt0++;
             else
                cnt1++;
                }
         if(cnt==k)
        {
            cout << "YES" << endl ;
            continue;
        }
         minpair = max(cnt0 , cnt1) - n/2 ;
        maxpair = cnt0/2 + cnt1/2 ;
                 {
            if(((k % 2) ^ (minpair % 2) == 1)|| k > maxpair || k < minpair)
                cout << "NO" << endl;
             else 
                cout << "YES" << endl ; 
                         }
    }
                 }