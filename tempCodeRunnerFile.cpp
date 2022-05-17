int u = i;
            cout << i;
            while (u != j) {
                cout << u << " -> ";
                u = Next[u][j];
            }