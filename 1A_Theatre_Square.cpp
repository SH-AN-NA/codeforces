// Codeforces Problem: 1A - Theatre Square
// Language: C++23 (GCC 14-64, msys2)

#include <iostream>
using namespace std;
 int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
     long long N = (n + a - 1) / a;
    long long M = (m + a - 1) / a;  
     cout << N * M;
}