// Codeforces Problem: 151A - Soft Drinking
// Submission ID: 357820084
// Language: C++17 (GCC 7-32)

#include <iostream>
#include<algorithm>
using namespace std;
 int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n >>k >>l >> c>> d>>p >>nl >>np;
        // Calculates the minimum (bottleneck) servings per person
    int minnum = min({
        (k*l/(n*nl)), // Servings limited by drink volume
        (c*d/(n)),    // Servings limited by lime slices
        (p/(n*np))    // Servings limited by salt volume
    });
        cout <<endl<<minnum<<endl;
        return 0;
}