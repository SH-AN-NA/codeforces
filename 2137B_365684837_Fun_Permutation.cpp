// Codeforces Problem: 2137B - Fun Permutation
// Submission ID: 365684837
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        int temp = n ;
        while(temp --)
        {
            int x ; cin >> x ;
            cout << n + 1 - x << " ";
        }
        cout << endl;
    }
}