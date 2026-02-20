// Codeforces Problem: 1352A - Sum of Round Numbers
// Submission ID: 363703576
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
        vector<int> a;
        int n; 
        cin >> n;
         int place = 1;
         while(n != 0)
        {
            int digit = n % 10;
             if(digit != 0)
            {
                a.push_back(digit * place);
            }
             place *= 10;
            n /= 10;
        }
         cout << a.size() << endl;
         for(int i : a)
            cout << i << " ";
        cout << endl;
    }
}