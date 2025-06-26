#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int previous = 0, l = 0, r = n - 1;
    int current = 0, moves = 0, a = 0, b = 0;
    bool flag = true;

    while (l <= r) {
        moves++;
        current = 0;

        if (flag) {
            while (l <= r && current <= previous) {
                current += vec[l];
                a += vec[l];
                l++;
            }
        } else {
            while (l <= r && current <= previous) {
                current += vec[r];
                b += vec[r];
                r--;
            }
        }

        previous = current;
        flag = !flag;
    }

    cout << moves << " " << a << " " << b << endl;
    return 0;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
