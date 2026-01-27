// Codeforces Problem: 2193B - Reverse a Permutation
// Submission ID: 360214578
// Language: C++23 (GCC 14-64, msys2)

//div 3
 #include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while (t--)
    {
        int n;
        cin >> n;
         vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
                 if (a[0] != n)
        {
            auto pos = find(a.begin(),a.end(),n) - a.begin();
            reverse(a.begin(), a.begin() + pos + 1);
        }
        else
                 {
            int ind = 1;
            while (ind < n && a[ind] == n - ind)
                ind++;
             if (ind < n)
            {
                int target = n - ind;
                int id = ind;
                 for (int i = ind; i < n; i++)
                {
                    if (a[i] == target)
                    {
                        id = i;
                        break;
                    }
                }
                 reverse(a.begin() + ind, a.begin() + id + 1);
            }
        }
         for (int x : a)
            cout << x << " ";
        cout << endl;
    }
}