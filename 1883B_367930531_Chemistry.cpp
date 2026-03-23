// Codeforces Problem: 1883B - Chemistry
// Submission ID: 367930531
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<string>
#include<map>
 using namespace std ;
 void solve()
{
    int n , k ;
    cin >> n >> k ;
    string s ; cin >> s ;
     map<char,int> freq;
     for(char c : s)
        freq[c]++;
     int odd = 0;
    for(auto it : freq)
    {
        if(it.second % 2)
            odd++;
    }
     odd = max(0, odd - k);
      if(odd <= 1) //(n-k % 2 == odd % 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        solve();
    } 
}
 // n = even ; orignial_odd must be even 
// if k is odd ; new_odd becomes odd
// n - k also becomes odd so no problem with  odd - k