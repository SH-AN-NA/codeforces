// Codeforces Problem: 2172A - ASCII Art Contest
// Submission ID: 366160924
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int a , b , c ;
    cin >> a >> b >> c ;
     if(max(a,max(b,c)) - min(a,min(b,c)) >= 10)
        cout << "check again" ;
     else
        cout << "final " << a + b + c - max(a,max(b,c)) - min(a,min(b,c)) ;
}