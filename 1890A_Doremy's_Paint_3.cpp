// Codeforces Problem: 1890A - Doremy's Paint 3
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
        vector<int> a(n);
        for(int &i : a)
            cin >> i;
        //  hash array can be used but amking an index of 10^5 is not fisible;
        unordered_map<int,int> us;
        for(int x : a)
            us[x]++;
         if(us.size()==1)
            cout << "YES" << endl;
        else if(us.size()>2)
            cout << "NO" << endl;
        else
            {
                auto it = us.begin();
                int f1 = it->second;
                ++it;
                int f2 = it->second;
                 if(abs(f1 - f2) <= 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
                // sets::count gives 1 or 0 only 
    }
 }