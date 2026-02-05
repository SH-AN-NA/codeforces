// Codeforces Problem: 118A - String Task
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     string s;
    cin >> s;
         for(auto i : s)
    {
        if(i<97)
            i+=32;
        if((i!='a')&&(i!='e')&&(i!='i')&&(i!='o')&&(i!='u')&&(i!='y'))
        cout << "." << i ;
             }
}