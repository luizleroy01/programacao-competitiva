#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    vector<string> result = grid;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if ((i + j) % 2 == 0) {
                // usar A ou B
                if (grid[i][j] != 'A') result[i][j] = 'A';
                else result[i][j] = 'B';
            } else {
                // usar C ou D
                if (grid[i][j] != 'C') result[i][j] = 'C';
                else result[i][j] = 'D';
            }
        }
    }

    // validação (opcional)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (result[i][j] == grid[i][j]) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
            if (i > 0 && result[i][j] == result[i - 1][j]) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
            if (j > 0 && result[i][j] == result[i][j - 1]) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    for (auto &row : result) {
        cout << row << "\n";
    }

    return 0;
}