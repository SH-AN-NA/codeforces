// Codeforces Problem: 1900A - Cover in Water
// Submission ID: 361021418
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        int cntSegment=0, cntDot=0;
        for(int i =0; i<n ; i++)
        {
            if (s[i]=='.') {
                cnt++;
                cntDot++;
            }
                    else cnt=0;
                        if(cnt==3)
            {
                cntSegment=2;
                break;
            }
                }
            if(cntSegment==2)
                cout << 2 << endl;
            else
            cout <<cntDot++ << endl;
    }
}