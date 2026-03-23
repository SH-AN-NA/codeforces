// Codeforces Problem: 1904A - Forked!
// Submission ID: 367925409
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<set>
 using namespace std ;
 int dx[4] = {1,-1,1,-1} , dy[4]= {1,-1,-1,1} ;
void solve()
{
    int a , b , xk , yk , xq , yq ; 
    cin >> a >> b >> xk >> yk >> xq >> yq ;
     int cnt = 0;
    set<pair<int,int>> st1 , st2 ;
     for(int i = 0 ; i < 4 ; i++)
    {
        st1.insert({xk + dx[i]*a , yk + dy[i]*b });
        st1.insert({xk + dx[i]*b , yk + dy[i]*a} );
        st2.insert({xq + dx[i]*a , yq + dy[i]*b});
        st2.insert({xq + dx[i]*b , yq + dy[i]*a });
    }
     for(auto it : st1)
    {
        if(st2.find(it) != st2.end())
            cnt++ ;
     }
    cout << cnt << endl ;
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