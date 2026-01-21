// Codeforces Problem: 90A - Cableway
// Language: C++23 (GCC 14-64, msys2)

#include <iostream>
#include <algorithm>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int a, b, c;
    cin >> a >> b >> c;
             int r = 30 + 3 * ((a / 2) - 1 + (a % 2));
               int g =31 + 3 * ((b / 2) - 1 + (b % 2));
         int bl = 32 + 3 * ((c / 2) - 1 + (c % 2));
   cout <<max(r,max(g,bl));
    return 0;
}