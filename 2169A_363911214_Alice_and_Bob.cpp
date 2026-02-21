// Codeforces Problem: 2169A - Alice and Bob
// Submission ID: 363911214
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
        int n , a ; 
        cin >> n >> a;
         vector<int> x(n);
        int left = 0 , right = 0;
         for(int &i : x)
        {
            cin >> i;
            if(i < a) left++;
            else if(i > a) right++;
        }
         if(left > right)
            cout << a - 1 << endl;
        else
            cout << a + 1 << endl;
    }
}