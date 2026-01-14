// Codeforces Problem: 1899A - Game with Integers
// Language: C++17 (GCC 7-32)

#include<iostream>
using namespace std;
 int main()
{
    int t;
    cin >> t;
    cout << endl;
    int n;
    while(t--)
    {
        cin >> n;
        if(n%3==0)
        cout << "Second"<< endl;
        else
        cout << "First"<< endl;
    }
    return 0;
}