// Codeforces Problem: 2197B - Array and Permutation
// Submission ID: 367558597
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
using namespace std;
 void solve()
{
    int n; cin >> n;
     vector<int> p(n+2), a(n+2);
     for(int i = 1; i <= n; i++)
        cin >> p[i];
     for(int i = 1; i <= n; i++)
        cin >> a[i];
      vector<int> pos(n+2);
    for(int i = 1; i <= n; i++)
        pos[p[i]] = i; // marks position
     for(int i = 1; i <= n; i++)
    {
           if(i > 1 && pos[a[i]] < pos[a[i-1]])
        {
            cout << "NO" << endl;
            return;
        }
    }
     cout << "YES" << endl;
}
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t;
    while(t--) solve();
}
/*
3 7 4 2 1 6 5
3 3 4 4 5 6 5
 1 3 2 5 4
3 3 3 5 4
 for elements of p check element is present in close proximity
if not return no
5 is imposter here
  failing case where swapping has to be done since swap is not allowed
p :  2 1
a :  1 2
 pos: 1 2
  1 2 3 5 4
1 2 2 4 5
 pos : 1 2 3 5 4
 */