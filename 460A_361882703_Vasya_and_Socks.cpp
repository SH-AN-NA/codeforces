// Codeforces Problem: 460A - Vasya and Socks
// Submission ID: 361882703
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n , m ;
    cin >> n >> m ;
        //int days = 0;
     //      O(1) since x socs are what brought and x new is how more can be brought
    //      x new = (n + x -1)/m
    //      1 socks is lost when new is brought by her mom 
    //                  x(m-1) = n - 1 0r x = (n-1)/(m-1) 
     cout << n + (n-1)/(m-1) ;
}