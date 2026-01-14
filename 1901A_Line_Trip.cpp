// Codeforces Problem: 1901A - Line Trip
// Language: C++17 (GCC 7-32)

#include<iostream>
#include<algorithm>
using namespace std;
 int main()
{
    int t;
    cin >> t;
    cout << endl;
    while(t--)
    {
        int n,x;
        cin>> n>>x;
        cout << endl;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>> array[i];
        }
        int mindist=array[0],c;
        for(int i=1;i<n;i++)
        {
           c=mindist;
           mindist = array[i] -array[i-1];
           mindist = max(c,mindist);
        }
        c= 2*(x-array[n-1]);
            cout<< max(mindist,c);
                       }
}