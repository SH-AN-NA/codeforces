// Codeforces Problem: 2188A - Divisible Permutation
// Submission ID: 360525263
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t;
    while(t--)
    {
        int n; cin >> n;
         vector<int> seq;
         int l = 1, r = n; //two pointerssss
        while (l <= r)
        {
            if (l != r)
            {
                seq.push_back(r);
                seq.push_back(l);
            }
                        else 
            {
                seq.push_back(l); 
            }
            l++;
            r--;
        }
         for (int i = seq.size() - 1; i >= 0; i--)
            cout << seq[i] << " ";
        cout << endl ;
    }
}