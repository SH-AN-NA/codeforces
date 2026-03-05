// Codeforces Problem: 2171B - Yuu Koito and Minimum Absolute Sum
// Submission ID: 365516868
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
        int n; 
        cin >> n;
         vector<int> a(n);
         for(int &i : a)
            cin >> i;
         if(a[0] == -1 && a[n-1] != -1)
            a[0] = a[n-1];
                    else if(a[0] != -1 && a[n-1] == -1)
            a[n-1] = a[0];
         for(int &i : a)
        {
            if(i == -1)
                i = 0;
        }
         cout << abs(a[n-1] - a[0]) << endl;
         for(int i : a)
            cout << i << " ";
         cout << endl;
    }
     return 0;
}