// Codeforces Problem: 1831A - Twin Permutations
// Submission ID: 361165513
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
        int n ;  cin >> n;
        vector<int> a(n);
        for(int &i : a )
            cin >> i;
        for(int i: a)
            cout << n - i + 1 << " ";
         cout << endl;
     }
}