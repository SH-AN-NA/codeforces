// Codeforces Problem: 2157A - Dungeon Equilibrium
// Submission ID: 367018499
// Language: C++23 (GCC 14-64, msys2)

//800
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
        vector<int> a(n);
         for(int &i : a)
            cin >> i ;
         map<int,int> freq;
        for(int i : a)
        {
            freq[i]++;
        }
         int cnt = 0 ;
        for(auto i : freq)
        {
            if(i.first > i.second)
                cnt += i.second;
             else
            cnt += i.second - i.first ;
        }
        cout << cnt << endl ;
     }
}