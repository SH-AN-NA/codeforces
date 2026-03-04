// Codeforces Problem: 520A - Pangram
// Submission ID: 365422919
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n; cin >> n ;
    cin.ignore();
    string s; 
    getline(cin, s);
     vector<int> a(26,0);
     for(char i : s)
    {
        int x;
         if(i >= 'a' && i <= 'z')
            x = i - 'a';
        else if(i >= 'A' && i <= 'Z')
            x = i - 'A';
        else
            continue;
         a[x] = 1;
    }
     int cnt = 0;
    for(int i : a)
        if(i == 1)
            cnt++;
     cout << (cnt == 26 ? "YES" : "NO") ;
}