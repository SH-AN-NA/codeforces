// Codeforces Problem: 2137B - Fun Permutation
// Submission ID: 365685205
// Language: C++23 (GCC 14-64, msys2)

#include <iostream>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while(t--)
    {
        int n;
        cin >> n;
         for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cout << n + 1 - x << " ";
        }
        cout << '\n';
    }
}