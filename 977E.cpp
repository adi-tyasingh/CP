#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, m, res = 0;
    cin >> n >> m;

    vector<set<int>> adj(n + 1);
    vector<bool> vis(n + 1, false);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        // assuming 1-based indexing
        adj[x].insert(y);
        adj[y].insert(x);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            bool isCycle = true;
            stack<int> st;
            st.push(i);
            vis[i] = true;

            while (!st.empty()) {
                int node = st.top(); st.pop();
                if (adj[node].size() != 2) isCycle = false;

                for (int neighbor : adj[node]) {
                    if (!vis[neighbor]) {
                        vis[neighbor] = true;
                        st.push(neighbor);
                    }
                }
            }

            if (isCycle)
                res++;
        }
    }

    cout << res << endl;
    return 0;
}

int32_t main() {
    solve();
}
