#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of nodes and then edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n+1);

      cout << "Enter the edges details:\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 cout << "\nAdjacency List:\n";
    for (int i = 1; i <= n; ++i) {
        cout << i << ": ";
        for (int v : adj[i]) cout << v << " ";
        cout << '\n';
    }
}



