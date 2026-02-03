// Codeforces Problem: 339A - Helpful Maths
// Submission ID: 361309504
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin>>a;
    vector<char>b;
    for(int i=0 ; i< a.size() ; i++)
    {
        if(a[i]!='+') 
    b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    for(int i=0 ; i< b.size() ; i++)
    if(i!=(b.size()-1))
    cout <<  b[i] << "+" ;
    else
    cout <<  b[i] << endl;
   }