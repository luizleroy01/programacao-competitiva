#include <bits/stdc++.h>
using namespace std;

vector<string> board(8);

bool col[8];
bool diag1[15];
bool diag2[15];

int ans = 0;

void solve(int row) {
    if (row == 8) {
        ans++;
        return;
    }

    for (int colPos = 0; colPos < 8; colPos++) {

        if (board[row][colPos] == '*')
            continue;

        int d1 = row - colPos + 7;
        int d2 = row + colPos;

        if (col[colPos] || diag1[d1] || diag2[d2])
            continue;

        col[colPos] = diag1[d1] = diag2[d2] = true;

        solve(row + 1);
        col[colPos] = diag1[d1] = diag2[d2] = false;
    }
}

int main() {
    for (int i = 0; i < 8; i++)
        cin >> board[i];

    solve(0);

    cout << ans << endl;
}