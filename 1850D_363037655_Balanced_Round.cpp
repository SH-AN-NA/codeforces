// Codeforces Problem: 1850D - Balanced Round
// Submission ID: 363037655
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
  int t;
 cin >> t;
  while (t--)
 {
        int n , k ;
        cin >> n >> k;
         vector<int>a(n);
        for(auto &i : a)
            cin >> i;
         sort(a.begin(),a.end());
         int cnt =0;
        int segment = 0;
        for(int i = 1 ; i < n ; i++)
        {
                        if (n==1)
                break;
                     if(a[i]-a[i-1]>k)
                cnt = 0;
                        else
                cnt++; 
                            segment = max(segment,cnt+1);
                    }
         if (n==1)
            cout << 0 << endl;
        else 
            cout << (n-segment) << endl;
      }
}