// Codeforces Problem: 2149C - MEX rose
// Submission ID: 365508251
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t; 
    cin >> t;
     while(t--)
    {
        int n, k;
        cin >> n >> k;
         int cntk = 0, cnt = 0;
         vector<int> a(n);
        vector<int> hash(k, 0);
         for(int &i : a)
        {
            cin >> i;
             if(i < k)
                hash[i]++;
                            else if(i == k)
                cntk++;
                    }
         for(int i : hash)
        {
            if(i == 0)
                cnt++;
        }
         cout << max(cntk, cnt) << endl;
    }
     return 0;
}