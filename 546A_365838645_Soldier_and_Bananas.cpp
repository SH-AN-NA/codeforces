// Codeforces Problem: 546A - Soldier and Bananas
// Submission ID: 365838645
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int k , n , w ; 
    cin >> k >> n >> w ;
     if((k * w * (w + 1)/2) > n)
    cout << (k * w * (w + 1)/2) - n  ;
     else
        cout << 0 ;
}