// Codeforces Problem: 2195B - Heapify 1
// Submission ID: 367519042
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 void solve(int n)
{
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) //1th index
        cin >> a[i];
     bool sw = true;
    while(sw)
    {
        sw = false;
        for(int i = 1; i <= n/2; i++) 
        {
            if(a[i] > a[2*i])
            {
                swap(a[i], a[2*i]);
                sw = true;
            }
        }
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i+1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        solve(n);
    }
}
// 1 8 3 4 5 6 7 2
// 1 4 3 2 5 6 7 8
//while
// 1 2 3 4 5 6 7 8 