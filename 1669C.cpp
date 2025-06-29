#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        s.insert(vec[i] & 1); // Track parity of all elements
    }
    if (s.size() == 1) {
        cout << "YES\n";
        return 0;
    }

    // Check parity consistency for odd-indexed elements
    for (int i = 0; i < n; i += 2) {
        if ((vec[i] & 1) != (vec[0] & 1)) {
            cout << "NO\n";
            return 0;
        }
    }

    // Check parity consistency for even-indexed elements
    for (int i = 1; i < n; i += 2) {
        if ((vec[i] & 1) != (vec[1] & 1)) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;  
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
