// Codeforces Problem: 381B - Sereja and Stairs
// Submission ID: 366712403
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
    cin >> n;
     vector<int> a(n);
    for(int &x : a) 
        cin >> x;
     sort(a.begin(), a.end());
     map<int,int> freq;
     for(int x : a)
        freq[x]++;
     vector<int> left, right;
     for(auto it : freq)
        left.push_back(it.first);
     int largest = left.back();
     for(auto it : freq)
    {
        if(it.first != largest && it.second >= 2)
            right.push_back(it.first);
    }
         reverse(right.begin(), right.end());
     cout << right.size() + left.size() << endl ;
     for(int x : left) 
        cout << x << " ";
     for(int x : right) 
        cout << x << " ";
   }
 // 1 1 2 2 2 3 4 4 5 5
// 1 2 3 4 5 4 2 1 miss 2 and 5