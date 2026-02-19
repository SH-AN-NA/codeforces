// Codeforces Problem: 749A - Bachgold Problem
// Submission ID: 363631805
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int n ; cin >> n; 
        cout << n/2 <<endl;
    int num = n;
    for(int i = 0 ; i < n/2 - 1 ; i++)
    {
        cout << 2 << " ";
    }
    if(n%2==0)
        cout << 2 ;
    else 
        cout << 3 ;
     return 0;
}