#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> adj(n+6);

    int edges;
    cin >> edges;
    for (int i = 0; i < edges; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    vector<int> c(n, 0);
    for (int i = 0; i < n; i++) cin >> c[i];

    int src, dest, capacity;
    cin >> src >> dest >> capacity;

    priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<tuple<int, int, int, int>>> pq;
    vector<vector<int>> dp(n + 6, vector<int>(3, LLONG_MAX));

    dp[src][0] = 0;
    dp[src][1] = 0;
    pq.push({0, src, capacity, 0});

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();

        int cost = get<0>(top);
        int node = get<1>(top);
        int fuel = get<2>(top);
        int choice = get<3>(top);

        if (cost > dp[node][choice]) continue;

        for (auto it : adj[node]) {
            int wt = it.second;
            int neigh = it.first;

            // If fuel is sufficient, move without refueling
            if (fuel - wt >= 0 && dp[neigh][choice] > cost) {
                pq.push({cost, neigh, fuel - wt, choice});
                dp[neigh][choice] = cost;
            }

            // If refueling is needed
            int x = capacity - wt;
            int rem = capacity - x;
            int added = rem * c[neigh];

            if (dp[neigh][1] > cost + added) {
                pq.push({cost + added, neigh, capacity, 1});
                dp[neigh][1] = cost + added;
            }
        }
    }

    cout << "Minimum cost path is " << min(dp[dest][0], dp[dest][1]) << endl;
}