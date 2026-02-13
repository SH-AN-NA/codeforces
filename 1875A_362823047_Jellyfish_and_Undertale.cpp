// Codeforces Problem: 1875A - Jellyfish and Undertale
// Submission ID: 362823047
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
using namespace std ;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        long long a , b , n ;
        cin >> a >> b >> n;
         long long sum = b;
         vector<long long> x(n);
        for(auto &i : x)
        {
            cin >> i ;
                 sum = sum + min(i,a-1);
        }
        cout << sum << endl;
    }
    }