// Codeforces Problem: 1845A - Forbidden Integer
// Submission ID: 360318535
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
                 if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
                        if (k == 1)
            {
                cout << "NO" <<  endl;
            }
            else if (k == 2)
            {
                                if (n % 2 == 1) {
                    cout << "NO" << endl;
                }
                else {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                }
            }
            else {
                                cout << "YES\n";
                // If n is even using all 2's
                if (n % 2 == 0) {
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                }
                else {
                                        cout << (n - 3) / 2 + 1 << endl;
                    cout << 3 << " ";
                    for (int i = 0; i < (n - 3) / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                }
            }
        }
    }
    return 0;
}