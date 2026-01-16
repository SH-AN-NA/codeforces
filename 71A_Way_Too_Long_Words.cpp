// Codeforces Problem: 71A - Way Too Long Words
// Language: C++17 (GCC 7-32)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string word;
        cin >>word;
        int n = word.length();
        if(n<=10)
        cout<<word<<endl;
        else
        cout << word[0] << (n-2)<<word [n-1]<<endl;
    }
     return 0;
}