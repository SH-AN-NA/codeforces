// Codeforces Problem: 122A - Lucky Division
// Submission ID: 362163806
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 bool IsLucky(int num)
{
    while(num > 0)
    {
        int d = num % 10;
         if(d != 4 && d != 7)
        {
             return 0;
            break;
        }
         num /= 10;
    }
    return 1;
}
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n; 
    cin >> n;
     for (int i = 1; i <= 1000; i++)
    {
        if (IsLucky(i) && (n % i == 0))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO" ;
    return 0;
    }