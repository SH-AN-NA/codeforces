// Codeforces Problem: 112A - Petya and Strings
// Submission ID: 360032671
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
  int main()
{
    string s1, s2;
    cin >> s1 >> s2;
     int cnt = 0;
     for (int i = 0; i < s1.size(); i++)  
    {
        if (s1[i] >= 97) //lower to upper
            s1[i] -= 32;
        if (s2[i] >= 97)
            s2[i] -= 32;
         if (s1[i] > s2[i])
        {
            cnt = 1;
            break;       
        }
        else if (s1[i] < s2[i])
        {
            cnt = -1;
            break;        
        }
            }
     cout << cnt << endl;
    return 0;
}