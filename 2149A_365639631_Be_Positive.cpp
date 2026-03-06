// Codeforces Problem: 2149A - Be Positive
// Submission ID: 365639631
// Language: C++23 (GCC 14-64, msys2)

#include <iostream>
#include <vector>
using namespace std;
 int main()
{
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n ;
        int cnt0 = 0 , cnt1 = 0;
        vector<int> a(n);
        for(int &i : a)
        {
            cin >> i;
            if(i==0)
                cnt0++;
            if(i==-1)
                cnt1++;
                    }
        cout << cnt0 + (cnt1 % 2)*2 << endl;
    }
     return 0;
}
    