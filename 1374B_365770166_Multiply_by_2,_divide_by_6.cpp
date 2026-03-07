// Codeforces Problem: 1374B - Multiply by 2, divide by 6
// Submission ID: 365770166
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
     while(t--)
    {
        int n ; cin >> n ; 
        int temp = n; 
        int fac2 = 0 , fac3 = 0;
        while(temp%3==0)
        {
            temp /= 3; 
            fac3++;
        }
        while(temp%2==0)
        {
             temp /= 2;
             fac2++;
        }
        if(temp!=1)
            cout << -1 << endl;
        else if(fac2 > fac3)
            cout << -1 << endl;
                                else 
            cout << 2*fac3 -fac2 << endl;
       }
}