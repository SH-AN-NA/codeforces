// Codeforces Problem: 2132B - The Secret Number
// Submission ID: 365691880
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        long long n ; cin >> n;
        long long x = 10;
        int cnt = 0;
        vector <long long> sol; 
        for(int k = 1 ; k < 18 ; k++)
        {
            if( n % (x + 1)==0) 
            {
                cnt++;
                sol.push_back(n / (x + 1));
            }
             x*=10;
        }
        reverse(sol.begin(), sol.end());
        cout << cnt << endl;
        for(long long i : sol)
            cout << i << " ";
         cout << endl;
    }
}