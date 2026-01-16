// Codeforces Problem: 1903A - Halloumi Boxes
// Language: C++17 (GCC 7-32)

#include<bits/stdc++.h>
using namespace std;
 void Sortcheck(int arr[],int n,int k)
{
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
       if(arr[i]<=arr[i+1])
        count++;
    }
        if((k==1)&&(count==n-1))
        cout << "YES" << endl;
        else if(k>1)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
     }
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Sortcheck(&arr[0],n,k);
             }
    return 0;
}