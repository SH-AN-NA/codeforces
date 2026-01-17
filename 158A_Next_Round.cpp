// Codeforces Problem: 158A - Next Round
// Language: C++17 (GCC 7-32)

#include<iostream>
using namespace std;
 int main()
{
    int n,k,x=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
                        }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        x=x+0;
     else if(a[i]>=a[k-1])
        x++;
            }
      cout<<x;
}