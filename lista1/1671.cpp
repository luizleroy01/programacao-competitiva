//Execío Sequência de Bits - Luiz Eduardo Leroy Souza
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const long long INF = 1e18;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,long long>>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;

        adj[a].push_back({b, c});
    }

    vector<long long> dist(n + 1, INF);

   using pll = pair<long long,int>;

  priority_queue<pll, vector<pll>, greater<pll>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {

        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : adj[u]) {

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }
}