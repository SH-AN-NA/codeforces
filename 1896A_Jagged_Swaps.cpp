// Codeforces Problem: 1896A - Jagged Swaps
// Language: C++23 (GCC 14-64, msys2)

//besttt
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
        vector<int> a(n);
        for(int j=0 ; j < n ; j++)
        {
            cin >> a[j];
        }
        /* 
        bool changed = true;
        while(changed) {
            changed = false;
            for(int j = 1; j < n - 1; j++) {
                if(a[j] > a[j-1] && a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                    changed = true;
                }
            }
        }
         int x=0;
        for(int j=0 ; j < n-1 ; j++)
        {
            if(a[j]<=a[j+1])
             x++;
        }
                if(x==n-1) */
        if(a[0]==1)
            cout << "YES" << endl;
        else
             cout << "NO" << endl;
     }
 }