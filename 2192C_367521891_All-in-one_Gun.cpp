// Codeforces Problem: 2192C - All-in-one Gun
// Submission ID: 367521891
// Language: C++23 (GCC 14-64, msys2)

// 1300
// suffic prefix
 #include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t;
    while(t--)
    {
        ll n, h, k;
        cin >> n >> h >> k;
         vector<ll> a(n);
        ll mxsum = 0;
        for(ll &i : a)
        {
            cin >> i;
            mxsum += i;
        }
         ll fullMags = h / mxsum;
         if(h % mxsum == 0)
        {
            cout << (fullMags - 1) * k + fullMags * n << '\n';
        }
        else
        {
            ll rem = h % mxsum;
             vector<ll> suffMax(n);
             suffMax[n-1] = a[n-1];
                        for(int i = n-2; i >= 0; i--)
                suffMax[i] = max(a[i], suffMax[i+1]);
             ll prefSum = 0, prefMin = INT_MAX;
            ll bullets = n; 
             for(int i = 0; i < n; i++)
            {
                prefSum += a[i];
                prefMin = min(prefMin, a[i]);
                 ll effectiveSum = prefSum;
                if(i + 1 < n && prefMin < suffMax[i+1])
                    effectiveSum = prefSum - prefMin + suffMax[i+1];
                 if(effectiveSum >= rem)
                {
                    bullets = i + 1;
                    break;
                }
            }
              cout << fullMags * k + fullMags * n + bullets << '\n';
        }
    }
}