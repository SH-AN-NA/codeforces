// Codeforces Problem: 451A - Game With Sticks
// Submission ID: 362039212
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n, m ;
    cin >> n >> m;
     if(min(n,m)%2==1)
        cout << "Akshat" ;
    else
        cout << "Malvika" ;
}