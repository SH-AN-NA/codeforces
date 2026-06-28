#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {   int sum =0;
        int layer;
        char s[10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0; j<10 ; j++) {
                cin >> s[i][j];
 
                if (s[i][j]=='X')
                {
                
 
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                        layer = 1;
                    else if (i == 1 || i == 8 || j == 1 || j == 8)
                        layer = 2;
                    else if (i == 2 || i == 7 || j == 2 || j == 7)
                        layer = 3;
                    else if (i == 3 || i == 6 || j == 3 || j == 6)
                        layer = 4;
                    else
                        layer = 5;
                    sum = sum + layer; 
                }
                
            }
            
        }   
           
            cout << sum << endl;  
        
 
    }
 
}
 