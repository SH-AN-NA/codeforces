// Codeforces Problem: 2106B - St. Chroma
// Submission ID: 365747000
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n , k ; 
        cin >> n >> k ;
         int temp = k ;
        int x = 0;
        while(temp--)
        {
            cout << x << " " ;
            x++;
        }
        temp = n - k;
        x = n - 1 ;
        while(temp--)
        {
            cout << x << " " ;
            x--;
        }
        cout << endl ;
    }
}