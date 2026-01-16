// Codeforces Problem: 231A - Team
// Language: C++17 (GCC 7-32)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n; cin>>n;
    int count=0;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int sum= x+y+z;
        if(sum>=2)
        count++;
        }
    cout<<count<<endl;
    return 0;
}