#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int t = 1;
	cin >> t;
    while(t-->0)
    {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
 
        long long ans = 1e9, sum = 0;
 
        for(int i=0; i<n; i++)
        {
            sum += a[i];
            ans = min(ans, sum / (i + 1));
 
            cout << ans << " ";
        }
 
        cout << "
";
    }
}