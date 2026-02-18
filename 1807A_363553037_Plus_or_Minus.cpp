// Codeforces Problem: 1807A - Plus or Minus
// Submission ID: 363553037
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t;
     while(t--)
    {
        int a , b , c;
        cin >> a >> b >> c;
                if(a+b==c)
            cout <<"+" << endl;
         else 
            cout << "-" << endl;
    } 
}