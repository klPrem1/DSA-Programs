// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int main() {
    int n, e, a, b, type;
    int adj[100][100] = {0};
    
    cin >> n;       // number of vertices
    cin >> e;       // number of edges
    cin >> type;    // 0 = undirected, 1 = directed

    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        adj[a][b] = 1;
        if (type == 0)
            adj[b][b] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }

    return 0;
}
