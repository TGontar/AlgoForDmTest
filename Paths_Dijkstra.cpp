#include "bits/stdc++.h"

using namespace std;
typedef long long ll;

ll INF = 1e9;
vector<vector<pair<ll, ll>>> g;
priority_queue<pair<ll, ll>> q;
vector<ll> dist;
vector<bool> used;

void deykstra(ll s) {
    dist[s] = 0;
    q.push({0, s});
    while (!q.empty()) {
        ll a = q.top().second;
        q.pop();
        if (used[a]) continue;
        used[a] = true;
        for (auto next: g[a]) {
            ll b = next.first;
            ll w = next.second;
            if (dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        }
    }
}

int main() {
    ll n, m, s;
    cin >> n >> m >> s;
    g.resize(n);
    dist.resize(n, INF);
    used.resize(n, false);
    for (ll i = 0; i < m; ++i) {
        ll a, b, w;
        cin >> a >> b >> w;
        --a;
        --b;
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }
    deykstra(s - 1);

    for (auto i : dist) {
        cout << i << " ";
    }
}