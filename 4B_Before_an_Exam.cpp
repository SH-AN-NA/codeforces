// Codeforces Problem: 4B - Before an Exam
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int d, sum;
    cin >> d >> sum;
     int arr[d][2];
    int sum1 = 0, sum2 = 0, sum3 = sum;
     for (int i = 0; i < d; i++) {
        cin >> arr[i][0] >> arr[i][1];
        sum1 += arr[i][0];
        sum2 += arr[i][1];
    }
     if (sum < sum1 || sum > sum2) {
        cout << "NO\n";
        return 0;
    }
     cout << "YES\n";
     for (int i = 0; i < d; i++) {
        int give = min(arr[i][1], sum3 - (sum1 - arr[i][0]));
        cout << give << " ";
        sum3 -= give;
        sum1 -= arr[i][0];
    }
     return 0;
}