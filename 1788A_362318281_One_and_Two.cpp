// Codeforces Problem: 1788A - One and Two
// Submission ID: 362318281
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
   int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
        int n; 
        cin >> n;
         int cnt2 =0;
         vector<int> a(n);
        for(int &i : a)
        {
            cin >> i ;
            if(i==2)
                cnt2++;
        }
                 if(cnt2 % 2==1)
            cout << -1 << endl;
                         else 
        {
            cnt2 /=2;
            for(int i = 0 ; i< n ; i++)
            {
                if(a[i]==2)
                    cnt2--;
                if(cnt2==0)
                {    
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
}