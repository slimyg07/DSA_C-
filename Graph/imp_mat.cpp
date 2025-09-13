#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of nodes and then edges: ";
    cin >> n >> m;

                 
    int adj[n+1][n + 1] = {};    

    cout << "Enter the edges details:\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for (int i = 0; i <= n; ++i) {          // 1-based
        for (int j = 0; j <= n; ++j) {
            cout << setw(4) << adj[i][j];
        }
        cout << '\n';
    }
}
