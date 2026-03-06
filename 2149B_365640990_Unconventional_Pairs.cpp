// Codeforces Problem: 2149B - Unconventional Pairs
// Submission ID: 365640990
// Language: C++23 (GCC 14-64, msys2)

#include <iostream>
#include<vector>
using namespace std;
 int main()
{
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n ;
                vector<int> a(n);
        for(int &i : a)
        {
            cin >> i;
                    }
        sort(a.begin(),a.end());
                int maxsum = 0 ;
        for(int i = 0 ; i <n-1 ; i+=2 )
        {
            maxsum = max(maxsum, abs(a[i]-a[i+1]));
                    }
        cout << maxsum << endl;
    }
     return 0;
}