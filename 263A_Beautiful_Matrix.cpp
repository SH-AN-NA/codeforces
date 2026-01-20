// Codeforces Problem: 263A - Beautiful Matrix
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int a[5][5];
    int marki=0,markj=0;
    for(int i =0;i<5 ;i++ )
    {
        for(int j=0; j<5;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                marki=i ; markj=j;
            }
                    }
            }
    cout << abs(marki-2) + abs(markj-2)<< endl;
}