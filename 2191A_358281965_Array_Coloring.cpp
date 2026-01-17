// Codeforces Problem: 2191A - Array Coloring
// Submission ID: 358281965
// Language: C++17 (GCC 7-32)

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
        int n; cin >> n;
        int x=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(((a[i]%2==0)&&(a[i+1]%2==0))||(((a[i]%2)!=0)&&((a[i+1]%2)!=0))){
                x=1;
                break;
            }
        }
        if(x==1)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
                }
}