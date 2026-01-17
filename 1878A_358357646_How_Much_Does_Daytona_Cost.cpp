// Codeforces Problem: 1878A - How Much Does Daytona Cost?
// Submission ID: 358357646
// Language: C++17 (GCC 7-32)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int b=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==k)
            b=1;
         }
        if(b==1)
        cout << "YES"<< endl;
         else
        cout << "NO"<< endl;
            }
}