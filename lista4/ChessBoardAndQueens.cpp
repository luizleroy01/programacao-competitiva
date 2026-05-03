#include<bits/stdc++.h>

using namespace std;

int total_ways = 0;
vector<string> board(8);
bool column[8], diag1[16], diag2[16];

void solve(int row) {
    if (row == 8) {
        total_ways++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '.' && !column[col] && !diag1[row + col] && !diag2[row - col + 8]) {
            column[col] = diag1[row + col] = diag2[row - col + 8] = true;
            solve(row + 1);
            column[col] = diag1[row + col] = diag2[row - col + 8] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
    solve(0);
    cout << total_ways << endl;

    return 0;
}