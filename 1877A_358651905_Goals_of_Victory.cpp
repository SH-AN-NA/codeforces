// Codeforces Problem: 1877A - Goals of Victory
// Submission ID: 358651905
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h> 
using namespace std; 
 int main()
{ 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
     int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int x,sum=0;
        for(int i =0; i<n-1 ; i++)
        {
            cin >> x;
            sum +=x;
        }
        cout << -sum << endl;
     }
}