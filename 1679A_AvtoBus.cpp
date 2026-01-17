// Codeforces Problem: 1679A - AvtoBus
// Language: C++17 (GCC 7-32)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int t; cin >>t;
    while(t--)
    {
        long long n; cin>> n;
        long long mn,mx;
        if(n%2!=0)
        cout << -1<< endl;
        else
        {
                        mx= n/4;
                        mn = (n+5)/6;
            if(mx>=mn)
            cout<<mn<<" "<<mx<<endl;
            else
            cout << -1<< endl;
                     }
            }
    return 0;
}