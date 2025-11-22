// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int adj[100][100], deg[100] = {0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = -1;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u][deg[u]++] = v;
        adj[v][deg[v]++] = u;
    }

    int start;
    cin >> start;

    int visited[100] = {0};
    int q[100], front = 0, rear = 0;

    visited[start] = 1;
    q[rear++] = start;

    while (front < rear) {
        int node = q[front++];
        cout << node << " ";

        for (int i = 0; i < deg[node]; i++) {
            int x = adj[node][i];
            if (!visited[x]) {
                visited[x] = 1;
                q[rear++] = x;
            }
        }
    }

    return 0;
}
