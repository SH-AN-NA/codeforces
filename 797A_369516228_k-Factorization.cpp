// Codeforces Problem: 797A - k-Factorization
// Submission ID: 369516228
// Language: C++23 (GCC 14-64, msys2)

// 1071 10
//
   // 2 3 4 
// prod = 24 
// qube root of 24 = 2.xxx
 // there has to be a factor less than nth root of number 
 #include<vector>
#include<iostream>
#include<cmath>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
          int n, k;
        cin >> n >> k;
         vector<int> sol;
        int x = n;
          for(int i = 2; i * i <= x; i++)
        {
            while(x % i == 0)
            {
                sol.push_back(i);
                x /= i;
            }
        }
         if(x > 1) sol.push_back(x);
          if(sol.size() < k)
        {
            cout << -1 ;
         }
        else
        {
            for(int i = 0; i < k-1; i++)
                cout << sol[i] << " ";
             int last = 1;
            for(int i = k-1; i < sol.size(); i++)
                last *= sol[i];
             cout << last ;
        }
  }