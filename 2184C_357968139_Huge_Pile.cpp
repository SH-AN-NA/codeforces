// Codeforces Problem: 2184C - Huge Pile
// Submission ID: 357968139
// Language: C++17 (GCC 7-32)

#include <iostream>
using namespace std;
 int check(int n, int k)
{
    int lowmax = n, highmin = n;
    int Min = 0;
     while (highmin != 1)
    {
        // for some odd number k can be higher than lowmax and lesser than highmin
         if (lowmax <= k && k <= highmin)
            return Min;
          lowmax = lowmax / 2;
        highmin = highmin / 2 + highmin % 2;
        Min++;
    }
     if (lowmax <= k && k <= highmin)
        return Min;
     return -1;
}
 int main()
{
    int t;
    cin >> t;
    cout << endl;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << check(n, k) << endl;
    }
     return 0;
}